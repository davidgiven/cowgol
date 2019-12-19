#include "globals.h"
#include "midcode.h"
#include "regalloc.h"

extern int burm_label(struct midnode* n);
extern int burm_rule(int state, int goal);
extern short* burm_nts[];
extern void burm_action(int ern, struct midnode* node);
extern const char* burm_string[];

static void dump_cover(struct midnode* node, int goal)
{
	int ern = burm_rule(node->iburg, goal);
	short* nts = burm_nts[ern];

	if (node->left)
		dump_cover(node->left, nts[0]);
	if (node->right)
		dump_cover(node->right, nts[1]);

	printf("rule %d: %s\n", ern, burm_string[ern]);
	burm_action(ern, node);
	regalloc_unlock(ALL_REGS);
}

void generate(struct midnode* node)
{
	if (!burm_label(node))
	{
		fprintf(stderr, "No matching pattern for: ");
		print_midnode(stderr, node);
		fprintf(stderr, "\n");
		fatal("no matching pattern");
	}

	print_midnode(stdout, node);
	fprintf(stdout, "\n");
	dump_cover(node, 1);
	discard(node);
}

void discard(struct midnode* node)
{
}

