#ifndef CODEGEN_H
#define CODEGEN_H

#if defined IMPL

#include "inssel.h"

#define RULE_HAS_PREDICATES 0x01
#define RULE_HAS_REWRITER 0x02

struct rule
{
	uint8_t flags;
	reg_t compatible_producable_regs;
	reg_t producable_regs;
	reg_t uses_regs;
	reg_t consumable_regs[INSTRUCTION_TEMPLATE_DEPTH];
	uint8_t matchbytes[INSTRUCTION_TEMPLATE_DEPTH];
	uint8_t copyable_nodes;
	uint8_t register_nodes;
};

struct instruction
{
	uint8_t ruleid;
	reg_t producable_regs;
	reg_t produced_reg;
	reg_t input_regs;
	reg_t output_regs;
	Node* n[INSTRUCTION_TEMPLATE_DEPTH];
	Regmove* first_spill;
	Regmove* first_reload;
	Regmove* last_reload;
};

struct regmove
{
	reg_t src;
	reg_t dest;
	Regmove* next;
};

extern const Register registers[];
extern const Rule codegen_rules[INSTRUCTION_TEMPLATE_COUNT];

extern void unmatched_instruction(Node* node);
extern void populate_match_buffer(Instruction* insn, Node** n, uint8_t* matchbuf);
extern void emit_instruction(Instruction* insn);
extern void setup_instruction(Instruction* insn, int rule, Node** nodes);
extern bool template_comparator(const uint8_t* data, const uint8_t* template);
extern bool match_predicate(uint8_t rule, Node** n);
extern Node* rewrite_node(uint8_t rule, Node** n);
extern void emit_one_instruction(uint8_t rule, Instruction* self);

#endif

extern void generate(Node* node);
extern void discard(Node* node);

extern void push_node(Node* node);

#endif

