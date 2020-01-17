#ifndef CODEGEN_H
#define CODEGEN_H

#if defined IMPL

#include "inssel.h"

struct instruction
{
	int rule;
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
extern const reg_t insn_producable_regs[];
extern const reg_t insn_uses_regs[];
extern const reg_t insn_consumable_regs[INSTRUCTION_TEMPLATE_COUNT][INSTRUCTION_TEMPLATE_DEPTH];
extern const uint8_t insn_copyable_nodes[];
extern const uint8_t insn_register_nodes[];

extern void unmatched_instruction(Node* node);
extern void match_instruction(Node* node, Instruction* insn);
extern void emit_instruction(Instruction* insn);
extern void setup_instruction(Instruction* insn, int rule, Node** nodes);
extern bool template_comparator(const uint8_t* data, const uint8_t* template);

#endif

extern void generate(Node* node);
extern void discard(Node* node);

extern void push_node(Node* node);

#endif

