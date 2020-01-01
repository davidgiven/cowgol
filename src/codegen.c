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

static Spill* create_spill(Instruction* instruction, reg_t src, reg_t dest)
{
	Spill* spill = calloc(sizeof(Spill), 1);
	spill->src = src;
	spill->dest = dest;
	spill->next = instruction->first_spill;
	instruction->first_spill = spill;
	return spill;
}

static Reload* create_reload(Instruction* instruction, reg_t src, reg_t dest)
{
	Reload* reload = calloc(sizeof(Reload), 1);
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

		/* Generate the instruction rooted at this node. */

		Node* n = nodes[--nodecount];
		match_instruction(n, producer);
		n->producer = producer;

		if (producer->producable_regs)
		{
			/* The instruction has produced a register. For stackable registers,
			 * stop now: we ignore them for doiing actual register allocation. */

			if (!isstacked(producer->producable_regs))
			{
				/* Locate the register's consumer and allocate something. */

				Instruction* consumer = n->consumer;
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

					blocked = find_conflicting_registers(producer->produced_reg);
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
		}
	}

	/* Work backwards through the set of generated instructions, emitting each
	 * one. */

	while (instructioncount != 0)
	{
		Instruction* insn = &instructions[--instructioncount];
		arch_emit_comment("insn %d rule %d produces 0x%x inputs 0x%x outputs 0x%x",
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
		
		/* Emit reloads. */

		while (insn->first_reload)
		{
			Reload* r = insn->first_reload;
			arch_emit_move(r->src, r->dest);
			insn->first_reload = r->next;
			free(r);
		}

		/* The instruction itself! */

		emit_instruction(insn);

		/* Emit spills. */

		while (insn->first_spill)
		{
			Spill* s = insn->first_spill;
			arch_emit_move(s->src, s->dest);
			insn->first_spill = s->next;
			free(s);
		}
	}
}

void discard(struct midnode* node)
{
	if (node->left)
		discard(node->left);
	if (node->right)
		discard(node->right);
	free(node);
}


