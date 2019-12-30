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

reg_t findfirst(reg_t reg)
{
	for (int i=0; i<REGISTER_COUNT; i++)
	{
		if (reg & (1<<i))
			return 1<<i;
	}
	assert(false);
}

void generate(Node* node)
{
	memset(instructions, 0, sizeof(instructions));
	memset(nodes, 0, sizeof(Node));
	instructioncount = 0;
	nodecount = 0;

	push_node(node);

	while (nodecount != 0)
	{
		Instruction* insn = &instructions[instructioncount++];

		/* Generate the instruction rooted at this node. */

		Node* n = nodes[--nodecount];
		match_instruction(n, insn);

		if (insn->producable_regs)
		{
			/* The instruction has produced a register. Locate its consumer
			 * and allocate something. */

			reg_t blocked = 0;
			Instruction* i = insn;
			while (i != n->consumer)
			{
				blocked |= i->blocked_regs;
				i--;
			}

			reg_t candidate = n->desired_reg & insn->producable_regs;
			if (!(candidate & blocked))
			{
				/* Good news --- we can allocate the ideal register for both
				 * producer and consumer. */
				candidate = findfirst(candidate);
				n->assigned_reg = insn->assigned_reg = candidate;

				do
				{
					i->blocked_regs |= candidate;
					i++;
				}
				while (i <= insn);
			}
			else
				fatal("register allocation too complex");
		}
	}

	/* Work backwards through the set of generated instructions, emitting each
	 * one. */

	while (instructioncount != 0)
	{
		Instruction* insn = &instructions[--instructioncount];
		emit_instruction(insn);
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


