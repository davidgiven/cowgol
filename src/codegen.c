#include "globals.h"
#include "midcodes.h"

#define IMPL
#include "codegen.h"

static Instruction instructions[100];
static int instructioncount;

static Node* nodes[100];
static int nodecount;

void unmatched_instruction(Node* node)
{
	fprintf(stderr, "No rule matches 0x%x := ", node->desired_reg);
	print_midnode(stderr, node);
	fprintf(stderr, "\n");
	fatal("Internal compiler error");
}

bool template_comparator(const uint8_t* data, const uint8_t* template)
{
	int i = INSTRUCTION_TEMPLATE_DEPTH;
	while (i--)
	{
		uint8_t d = *data++;
		uint8_t t = *template++;
		if (t && (d != t))
			return false;
	}
	return true;
}

void push_node(Node* node)
{
	nodes[nodecount++] = node;
}

static reg_t findfirst(reg_t reg)
{
	for (int i=0; i<REGISTER_COUNT; i++)
	{
		if (reg & (1<<i))
			return 1<<i;
	}
	assert(false);
}

static void deadlock(void)
{
	fatal("register allocation deadlock (rule contains impossible situation)");
}

static reg_t find_conflicting_registers(reg_t reg)
{
	reg_t conflicting = 0;
	for (int i=0; i<REGISTER_COUNT; i++)
	{
		const Register* r = &registers[i];
		if (r->id & reg)
			conflicting |= r->uses;
	}
	return conflicting;
}

static bool isstacked(reg_t reg)
{
	for (int i=0; i<REGISTER_COUNT; i++)
	{
		const Register* r = &registers[i];
		if (r->id & reg)
			return r->isstacked;
	}
	assert(false);
}

static Regmove* create_spill(Instruction* instruction, reg_t src, reg_t dest)
{
	Regmove* spill = calloc(sizeof(Regmove), 1);
	spill->src = src;
	spill->dest = dest;
	spill->next = instruction->first_spill;
	instruction->first_spill = spill;
	return spill;
}

static Regmove* create_reload(Instruction* instruction, reg_t src, reg_t dest)
{
	Regmove* reload = calloc(sizeof(Regmove), 1);
	reload->src = src;
	reload->dest = dest;
	if (!instruction->first_reload)
		instruction->first_reload = reload;
	if (instruction->last_reload)
		instruction->last_reload->next = reload;
	instruction->last_reload = reload;
	return reload;
}

static reg_t calculate_blocked_registers(Instruction* start, Instruction* end)
{
	reg_t blocked = 0;
	while (start <= end)
	{
		blocked |= (start->input_regs | start->output_regs);
		start++;
	}
	return blocked;
}

static void block_registers(Instruction* start, Instruction* end, reg_t blocked)
{
	while (start <= end)
	{
		start->input_regs |= blocked;
		start->output_regs |= blocked;
		start++;
	}
}

/* Deal with the theoretically simple but practically really, really annoying
 * problem of moving one set of registers to another. All register-to-
 * register moves have to happen simultaneously, so it's perfectly legal
 * for the move set to consist of A->B, B->A... which means the two registers
 * have to be swapped.
 */
static void shuffle_registers(Regmove* moves)
{
	reg_t dests = 0;
	reg_t srcs = 0;

	Regmove* m = moves;
	while (m)
	{
		#if 0
		arch_emit_comment("spill/reload 0x%x -> 0x%x", m->src, m->dest);
		#endif
		dests |= m->dest;
		srcs |= m->src;
		m = m->next;
	}

	for (;;)
	{
		/* Attempt to do any pushes *first*, which frees up sources. */

		m = moves;
		while (m)
		{
			if (m->src && !m->dest)
				break;
			m = m->next;
		}
		if (m)
		{
			arch_emit_move(m->src, 0);
			srcs &= ~m->src;
			m->src = 0;
			continue;
		}

		/* Attempt to find a move into a register which is *not* a source
		 * (and is therefore completely safe). */

		m = moves;
		while (m)
		{
			if (m->src && m->dest && !(m->dest & srcs))
				break;
			m = m->next;
		}
		if (m)
		{
			arch_emit_move(m->src, m->dest);
			srcs &= ~m->src;
			dests &= ~m->dest;
			m->src = m->dest = 0;
			continue;
		}

		/* Only once we're done with pushes and register-to-register moves
		 * do we deal with pops. */

		m = moves;
		while (m)
		{
			if (!m->src && m->dest)
				break;
			m = m->next;
		}
		if (m)
		{
			arch_emit_move(0, m->dest);
			dests &= ~m->dest;
			m->dest = 0;
			continue;
		}

		/* If we got here and there are any undealt with moves, there's a move
		 * loop which we need to break somehow. The best thing is to stash a
		 * value into a temporary register but that gets gnarly if there aren't
		 * any left. So, we do it the brute-force way and stack something. */

		m = moves;
		while (m)
		{
			if (m->src || m->dest)
				break;
			m = m->next;
		}
		if (m)
		{
			reg_t stacked = m->src;
			arch_emit_move(stacked, 0);
			srcs &= ~m->src;
			m->src = 0; /* convert this to a pop */
			continue;
		}

		/* Nothing left to do. */
		break;
	}
}

void generate(Node* node)
{
	arch_emit_comment("");

	char* buffer = NULL;
	size_t buffersize = 0;
	FILE* fp = open_memstream(&buffer, &buffersize);
	print_midnode(fp, node);
	fflush(fp);
	arch_emit_comment("%s", buffer);
	fclose(fp);

	memset(instructions, 0, sizeof(instructions));
	memset(nodes, 0, sizeof(nodes));
	instructioncount = 0;
	nodecount = 0;

	push_node(node);

	while (nodecount != 0)
	{
		Instruction* producer = &instructions[instructioncount++];

		/* Find the first matching rule for this instruction. */

		Node* n = nodes[--nodecount];
	rewrite:;
		uint8_t matchbytes[INSTRUCTION_TEMPLATE_DEPTH] = {0};
		Node* nodes[INSTRUCTION_TEMPLATE_DEPTH] = {n};
		populate_match_buffer(producer, nodes, matchbytes);

		const Rule* r;
		for (int i=0; i<INSTRUCTION_TEMPLATE_COUNT; i++)
		{
			r = &codegen_rules[i];
			if (!r->rewriter)
			{
				/* If this is a generation rule, not a rewrite rule, check to
				 * make sure the rule actually applies to this node. */

				if (r->compatible_producable_regs)
				{
					/* This rule produces a result, so only match if the register
					 * is compatible. */
					if (!(n->desired_reg & r->compatible_producable_regs))
						continue;
				}
				else
				{
					/* This rules produces no result, so only match if we likewise
					 * don't want one. */
					if (n->desired_reg)
						continue;
				}
			}

			/* Check that the tree matches. */

			if (!template_comparator(matchbytes, r->matchbytes))
				continue;

			/* If there's a manual predicate, check that too. */

			if (r->predicate && !r->predicate(nodes))
				continue;

			/* This rule matches! */

			goto matched;
		}
		unmatched_instruction(n);
	matched:

		/* If this is a rewrite rule, apply it now and return to the matcher. */

		if (r->rewriter)
		{
			Node* nr = r->rewriter(nodes);
			nr->desired_reg = n->desired_reg;
			nr->consumer = n->consumer;

			/* Remember to patch any pointers to the old nodes in the node's
			 * consumer. */
			for (int i=0; i<INSTRUCTION_TEMPLATE_DEPTH; i++)
				if (n->consumer->n[i] == n)
					n->consumer->n[i] = nr;
			n = nr;
			goto rewrite;
		}

		/* We have a matching instruction, so set it up. */

		producer->rule = r;
		producer->producable_regs = r->producable_regs;
		producer->output_regs = r->uses_regs;

		uint8_t copymask = r->copyable_nodes;
		uint8_t regmask = r->register_nodes;
		for (int i=0; i<INSTRUCTION_TEMPLATE_DEPTH; i++)
		{
			Node* n = nodes[i];
			if (copymask & 1)
			{
				producer->n[i] = n;
				if (regmask & 1)
				{
					push_node(n);
					n->desired_reg = r->consumable_regs[i];
					n->consumer = producer;
				}
			}
			copymask >>= 1;
			regmask >>= 1;
		}

		n->producer = producer;

		if (producer->producable_regs)
		{
			/* The instruction has produced a register. For stackable registers,
			 * stop now: we ignore them for doing actual register allocation. */

			if (!isstacked(producer->producable_regs))
			{
				/* Locate the register's consumer and allocate something. */

				Instruction* consumer = n->consumer;
				assert(consumer);
				reg_t blocked = calculate_blocked_registers(consumer+1, producer-1);

				reg_t candidate = n->desired_reg & producer->producable_regs;
				if (candidate & ~(blocked | producer->output_regs | consumer->input_regs))
				{
					/* Good news --- we can allocate the ideal register for both
					 * producer and consumer. */

					candidate = findfirst(candidate & ~(blocked | producer->output_regs | consumer->input_regs));
					n->produced_reg = producer->produced_reg = candidate;

					blocked = find_conflicting_registers(candidate);
					consumer->input_regs |= blocked;
					block_registers(consumer+1, producer-1, blocked);
					producer->output_regs |= blocked;
				}
				else if (producer->producable_regs & ~(blocked | producer->output_regs))
				{
					/* The producer and consumer want different registers, but the
					 * producer's register works up until the consumer. */

					producer->produced_reg = findfirst(
						producer->producable_regs & ~(blocked | producer->output_regs));
					n->produced_reg = findfirst(n->desired_reg & ~consumer->input_regs);

					consumer->input_regs |= find_conflicting_registers(n->produced_reg);
					blocked = find_conflicting_registers(producer->produced_reg);
					for (Instruction* i=consumer+1; i<producer; i++)
					{
						i->input_regs |= blocked;
						i->output_regs |= blocked;
					}
					producer->output_regs |= blocked;
					create_reload(consumer, producer->produced_reg, n->produced_reg);
				}
				else if (n->desired_reg & ~(blocked | consumer->input_regs))
				{
					/* The producer and consumer want different registers, but the
					 * consumer's register works after the producer. */

					producer->produced_reg = findfirst(
						producer->producable_regs & ~producer->output_regs);
					n->produced_reg = findfirst(n->desired_reg & ~(blocked | consumer->input_regs));

					blocked = find_conflicting_registers(n->produced_reg);
					consumer->input_regs |= blocked;
					block_registers(consumer+1, producer-1, blocked);
					producer->output_regs |= find_conflicting_registers(producer->produced_reg);
					create_spill(producer, producer->produced_reg, n->produced_reg);
				}
				else
				{
					/* Bad news --- we can't allocate any registers. So, spill to the stack. */

					candidate = producer->producable_regs & ~producer->output_regs;
					if (!candidate)
						deadlock();
					producer->produced_reg = findfirst(candidate);
					producer->output_regs |= find_conflicting_registers(producer->produced_reg);
					create_spill(producer, producer->produced_reg, 0);

					candidate = n->desired_reg & ~consumer->input_regs;
					if (!candidate)
						deadlock();
					n->produced_reg = findfirst(candidate);
					consumer->input_regs |= find_conflicting_registers(n->produced_reg);
					create_reload(consumer, 0, n->produced_reg);
				}
			}

			/* If any nodes which produce values consumed by this instruction
			 * have registers which depend on the one produced by this
			 * instruction, update them now. */

			bool updated = false;
			for (int i=0; i<INSTRUCTION_TEMPLATE_DEPTH; i++)
			{
				Node* n = producer->n[i];
				if (n && (n->desired_reg == REG_SAME_AS_INSTRUCTION_RESULT))
				{
					n->desired_reg = producer->produced_reg;
					updated = true;
				}
			}

			/* If we *did* update a register, then the *other* register
             * requirements must be updated to blacklist that register,
			 * or we very quickly run into register deadlock. */

			if (updated)
			{
				for (int i=0; i<INSTRUCTION_TEMPLATE_DEPTH; i++)
				{
					Node* n = producer->n[i];
					if (n && (n->desired_reg != producer->produced_reg))
						n->desired_reg &= ~producer->produced_reg;
				}
			}
		}
	}

	/* Work backwards through the set of generated instructions, emitting each
	 * one. */

	while (instructioncount != 0)
	{
		Instruction* insn = &instructions[--instructioncount];
		#if 0
		arch_emit_comment("insn %d rule %p produces 0x%x inputs 0x%x outputs 0x%x",
			insn - instructions,
			insn->rule,
			insn->produced_reg,
			insn->input_regs,
			insn->output_regs);
		for (int i=1; i<INSTRUCTION_TEMPLATE_DEPTH; i++)
		{
			Node* n = insn->n[i];
			if (n && n->produced_reg)
				arch_emit_comment("consumes 0x%x from insn %d",
					n->produced_reg, n->producer - instructions);
		}
		#endif
		
		/* Emit reloads. */

		shuffle_registers(insn->first_reload);
		while (insn->first_reload)
		{
			Regmove* r = insn->first_reload;
			insn->first_reload = r->next;
			free(r);
		}

		/* The instruction itself! */

		if (insn->rule->emitter)
			insn->rule->emitter(insn);

		/* Emit spills. */

		shuffle_registers(insn->first_spill);
		while (insn->first_spill)
		{
			Regmove* s = insn->first_spill;
			insn->first_spill = s->next;
			free(s);
		}
	}
}

void discard(struct midnode* node)
{
	if (!node)
		return;
	if (node->left)
		discard(node->left);
	if (node->right)
		discard(node->right);
	free(node);
}


