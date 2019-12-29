#include "globals.h"
#include "midcodes.h"

#define IMPL
#include "codegen.h"

void unmatched_instruction(Node* node)
{
	fprintf(stderr, "Unmatched instruction: ");
	print_midnode(stderr, node);
	fprintf(stderr, "\n");
	fatal("Internal compiler error");
}

Instruction* push_instruction(void)
{
}

void push_register(Node* node)
{
}

const char* regref(reg_t reg)
{
}

const char* symref(Symbol* sym, int32_t off)
{
}

void generate(Node* node)
{
	match_rule(node);
	fatal("unimplemented");
}

void discard(struct midnode* node)
{
	if (node->left)
		discard(node->left);
	if (node->right)
		discard(node->right);
	free(node);
}


