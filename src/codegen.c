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
	fprintf(stderr, "Unmatched instruction: ");
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

void generate(Node* node)
{
	arch_emit_comment("");

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
			/* The instruction has produced a register. Locate its consumer
			 * and allocate something. */

			reg_t blocked = producer->output_regs;
			Instruction* consumer = producer-1;
			while (consumer > n->consumer)
			{
				blocked |= (consumer->input_regs | consumer->output_regs);
				consumer--;
			}
			blocked |= consumer->input_regs;

			reg_t candidate = n->desired_reg & producer->producable_regs;
			if (candidate && !(candidate & blocked))
			{
				/* Good news --- we can allocate the ideal register for both
				 * producer and consumer. */

				candidate = findfirst(candidate);
				n->produced_reg = producer->produced_reg = candidate;

				blocked = find_conflicting_registers(candidate);
				consumer->input_regs |= blocked;
				for (Instruction* i=consumer+1; i<producer; i++)
				{
					i->input_regs |= blocked;
					i->output_regs |= blocked;
				}
				producer->output_regs |= blocked;
			}
			else
			{
				/* Bad news --- we can't allocate any registers. So, spill to the stack. */

				producer->produced_reg = findfirst(producer->producable_regs & ~producer->output_regs);
				producer->output_regs |= find_conflicting_registers(producer->produced_reg);
				Spill* spill = calloc(sizeof(Spill), 1);
				spill->src = producer->produced_reg;
				spill->dest = REG_STK;
				spill->next = producer->first_spill;
				producer->first_spill = spill;

				n->produced_reg = findfirst(n->desired_reg & ~consumer->input_regs);
				consumer->input_regs |= find_conflicting_registers(n->produced_reg);
				Reload* reload = calloc(sizeof(Reload), 1);
				reload->src = REG_STK;
				reload->dest = n->produced_reg;
				if (!consumer->first_reload)
					consumer->first_reload = reload;
				if (consumer->last_reload)
					consumer->last_reload->next = reload;
				consumer->last_reload = reload;
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


