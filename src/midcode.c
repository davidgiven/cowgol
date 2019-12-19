#include "globals.h"
#include "midcode.h"
#include "regalloc.h"

extern int burm_label(struct midnode* n);
extern int burm_rule(int state, int goal);
extern short* burm_nts[];
extern void burm_action(int ern, struct midnode* node);
extern const char* burm_string[];
extern struct midnode* burm_kids(struct midnode* node, int ern, struct midnode* children[]);

static void dump_cover(struct midnode* node, int goal)
{
	int ern = burm_rule(node->iburg, goal);
	short* nts = burm_nts[ern];
	struct midnode* children[2] = {0};

	burm_kids(node, ern, children);
	if (children[0])
		dump_cover(children[0], nts[0]);
	if (children[1])
		dump_cover(children[1], nts[1]);

	arch_emit_comment("");
	arch_emit_comment("rule %d: %s", ern, burm_string[ern]);
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
	if (node->left)
		discard(node->left);
	if (node->right)
		discard(node->right);
	free(node);
}

