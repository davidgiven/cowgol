#include "globals.h"
#include "midcode.h"
#include "regalloc.h"

extern int burm_label(struct midnode* n);

void generate(struct midnode* node)
{
	if (!burm_label(node))
	{
		fprintf(stderr, "No matching pattern for: ");
		print_midnode(stderr, node);
		fprintf(stderr, "\n");
		fatal("no matching pattern");
	}

	discard(node);
}

void discard(struct midnode* node)
{
}

