#ifndef CODEGEN_H
#define CODEGEN_H

#if defined IMPL

#include "inssel.h"

struct instruction
{
	int rule;
	reg_t producable_regs;
	reg_t assigned_reg;
	reg_t blocked_regs;
	Node* n[INSTRUCTION_TEMPLATE_DEPTH];
};

extern void unmatched_instruction(Node* node);
extern void match_instruction(Node* node, Instruction* insn);
extern void emit_instruction(Instruction* insn);
extern bool template_comparator(const uint8_t* data, const uint8_t* template);

#endif

extern void generate(Node* node);
extern void discard(Node* node);

extern void push_node(Node* node);

#endif

