#include "globals.h"
#include "parser.h"
#include <ctype.h>

typedef struct rule Rule;
struct rule
{
	Node* pattern;
	reg_t result;
	int cost;
};

struct node
{
	bool terminal;
	int midcode;
	Node* left;
	Node* right;
	reg_t reg;
	Predicate* predicate;
	const char* label;
};

#include "iburgcodes.h"

static const char* registers[sizeof(reg_t) * 8];
static int registercount = 0;

static Rule* rules[500];
static int rulescount = 0;

static int maxdepth = 0;
static Node* pattern;

FILE* outfp;

reg_t define_register(const char* name)
{
	for (int i=0; i<registercount; i++)
	{
		if (strcmp(name, registers[i]) == 0)
		{
			yyerror("register '%s' defined twice", name);
			return 1<<i;
		}
	}
	if (registercount == (sizeof(reg_t)*8))
		yyerror("too many registers (maximum %d)", sizeof(reg_t)*8);
	
	int i = registercount++;
	registers[i] = name;
	return 1<<i;
}

reg_t lookup_register(const char* name)
{
	for (int i=0; i<registercount; i++)
	{
		if (strcmp(name, registers[i]) == 0)
			return 1<<i;
	}
	yyerror("unknown register '%s'", name);
}

int lookup_midcode(const char* name)
{
	for (int i=0; i<sizeof(terminals)/sizeof(*terminals); i++)
	{
		const char* t = terminals[i];
		if (strcmp(name, t) == 0)
			return i;
	}
	yyerror("unknown midcode '%s'", name);
	return 0;
}

Node* terminal(reg_t reg)
{
	Node* n = calloc(sizeof(Node), 1);
	n->terminal = true;
	n->reg = reg;
	return n;
}

Node* tree(int midcode, Node* left, Node* right, Predicate* predicate, const char* label)
{
	Node* n = calloc(sizeof(Node), 1);
	n->terminal = false;
	n->midcode = midcode;
	n->left = left;
	n->right = right;
	n->predicate = predicate;
	n->label = label;
	return n;
}

void rule(Node* pattern, reg_t result)
{
	struct rule* r = calloc(sizeof(Rule), 1);
	r->pattern = pattern;
	r->result = result;

	if (rulescount == (sizeof(rules)/sizeof(*rules)))
		yyerror("too many rules");
	rules[rulescount++] = r;
}

static int collect_pattern_nodes(Node* tree, Node* pattern)
{
	if (!tree)
		return 0;
	if (tree->terminal)
		return 0;

	int cost = 1;
	if (tree->left && !tree->left->terminal)
	{
		if (!pattern->left)
		{
			Node* p = calloc(sizeof(Node), 1);
			pattern->left = p;
		}
		cost += collect_pattern_nodes(tree->left, pattern->left);
	}
	if (tree->right && !tree->right->terminal)
	{
		if (!pattern->right)
		{
			Node* p = calloc(sizeof(Node), 1);
			pattern->right = p;
		}
		cost += collect_pattern_nodes(tree->right, pattern->right);
	}
	return cost;
}

static int sort_rule_cb(const void* left, const void* right)
{
	const Rule* const* r1 = left;
	const Rule* const* r2 = right;
	if ((*r1)->cost > (*r2)->cost)
		return -1;
	if ((*r1)->cost < (*r2)->cost)
		return 1;
	return 0;
}

static void calculate_template_size(Node* node)
{
	maxdepth++;
	if (node->left)
		calculate_template_size(node->left);
	if (node->right)
		calculate_template_size(node->right);
}

static void sort_rules(void)
{
	pattern = calloc(sizeof(Node), 1);

	for (int i=0; i<rulescount; i++)
	{
		Rule* r = rules[i];
		r->cost = collect_pattern_nodes(r->pattern, pattern);
	}

	qsort(rules, rulescount, sizeof(Rule*), sort_rule_cb);

	calculate_template_size(pattern);
}

static void dump_registers(void)
{
	fprintf(outfp, "Register registers[] = {\n");
	for (int i=0; i<registercount; i++)
		fprintf(outfp, "\t{ \"%s\", 0x%08x },\n", registers[i], 1<<i);
	fprintf(outfp, "};\n");
}

static void walk_template_tree(int* offset, Node* template, Node* pattern)
{
	int thisoffset = *offset;
	fprintf(outfp, "%d, ", template ? template->midcode : 0);

	if (pattern->left)
	{
		(*offset)++;
		walk_template_tree(offset, template ? template->left : NULL, pattern->left);
	}
	if (pattern->right)
	{
		(*offset)++;
		walk_template_tree(offset, template ? template->right : NULL, pattern->right);
	}
}

static void dump_templates(void)
{
	for (int i=0; i<rulescount; i++)
	{
		Rule* r = rules[i];
		fprintf(outfp, "static const uint8_t template%d[%d] = { ", i, maxdepth);
		int offset = 0;
		walk_template_tree(&offset, r->pattern, pattern);
		fprintf(outfp, "}; /* cost %d */\n", r->cost);
	}
}

static void print_action(Action* action)
{
}

static void walk_matcher_tree(int* offset, Node* pattern)
{
	int thisoffset = *offset;
	fprintf(outfp, "\tmatchbuf[%d] = n%d->op;\n", thisoffset, thisoffset);

	if (pattern->left)
	{
		(*offset)++;
		fprintf(outfp, "\tNode* n%d = n%d->left;\n", *offset, thisoffset);
		fprintf(outfp, "\tif (n%d) {\n", *offset);
		walk_matcher_tree(offset, pattern->left);
		fprintf(outfp, "\t}\n");
	}
	if (pattern->right)
	{
		(*offset)++;
		fprintf(outfp, "\tNode* n%d = n%d->right;\n", *offset, thisoffset);
		fprintf(outfp, "\tif (n%d) {\n", *offset);
		walk_matcher_tree(offset, pattern->right);
		fprintf(outfp, "\t}\n");
	}
}

static const char* operator_name(int operator)
{
	switch (operator)
	{
		case EQUALS: return "==";
		case NOTEQUALS: return "!=";
	}
	assert(false);
}

static void print_predicate(int index, Node* template, Predicate* predicate)
{
	while (predicate)
	{
		fprintf(outfp, " && (n%d->", index);
		const char* s = terminals[template->midcode];
		while (*s)
			fputc(tolower(*s++), outfp);
		fprintf(outfp, ".%s %s %d)",
			predicate->field,
			operator_name(predicate->operator),
			predicate->value);

		predicate = predicate->next;
	}
}

static void walk_predicate_tree(int* offset, Node* template, Node* pattern)
{
	int thisoffset = *offset;
	if (template)
		print_predicate(thisoffset, template, template->predicate);

	if (pattern->left)
	{
		(*offset)++;
		walk_predicate_tree(offset, template ? template->left : NULL, pattern->left);
	}
	if (pattern->right)
	{
		(*offset)++;
		walk_predicate_tree(offset, template ? template->right : NULL, pattern->right);
	}
}

static void create_matcher(void)
{
	fprintf(outfp, "void match_rule(Node* n0) {\n");
	fprintf(outfp, "\tstatic uint8_t matchbuf[%d] = {0};\n", maxdepth);
	int offset = 0;
	walk_matcher_tree(&offset, pattern);

	for (int i=0; i<rulescount; i++)
	{
		Rule* r = rules[i];
		fprintf(outfp, "\tif ((memcmp(matchbuf, template%d, %d) == 0)", i, maxdepth);
		offset = 0;
		walk_predicate_tree(&offset, r->pattern, pattern);
		fprintf(outfp, ") {\n");
		fprintf(outfp, "\t}\n");
	}


	fprintf(outfp, "}\n");
}

int main(int argc, const char* argv[])
{
	if (argc != 3)
		fatal("syntax: newgen <inputfile> <outputfile>");

	FILE* infp = fopen(argv[1], "r");
	if (!infp)
		fatal("cannot open input file");

	outfp = fopen(argv[2], "w");
	if (!outfp)
		fatal("cannot open output file");

	include_file(open_file(infp));
	parse();

	sort_rules();
	dump_registers();
	dump_templates();
	create_matcher();

	return errcnt>0;
}

