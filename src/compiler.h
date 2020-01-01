#ifndef COMPILER_H
#define COMPILER_H

extern int32_t number;
extern struct symbol* current_type;

extern bool is_ptr(struct symbol* sym);
extern bool is_num(struct symbol* sym);
extern bool is_snum(struct symbol* sym);
extern bool is_array(struct symbol* sym);
extern bool is_array_ptr(struct symbol* sym);
extern bool is_scalar(struct symbol* sym);
extern bool is_record(struct symbol* sym);
extern bool is_record_ptr(struct symbol* sym);

extern struct midnode* expr_add(struct midnode* lhs, struct midnode* rhs);
extern struct midnode* expr_sub(struct midnode* lhs, struct midnode* rhs);
extern struct midnode* expr_simple(struct midnode* lhs, struct midnode* rhs,
		struct midnode* (*emitter)(int width, struct midnode* lhs, struct midnode* rhs));
extern struct midnode* expr_signed(struct midnode* lhs, struct midnode* rhs,
        struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs),
        struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs));
extern struct midnode* expr_shift(struct midnode* lhs, struct midnode* rhs,
        struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs),
        struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs));
extern void cond_simple(int truelabel, int falselabel, struct midnode* lhs, struct midnode* rhs,
        struct midnode* (*emitteru)(int width, struct midnode* lhs, struct midnode* rhs, int truelabel, int falselabel),
        struct midnode* (*emitters)(int width, struct midnode* lhs, struct midnode* rhs, int truelabel, int falselabel));

extern void init_var(struct symbol* sym, struct symbol* type);
extern void init_member(struct symbol* sym, struct symbol* type);
extern struct symbol* make_pointer_type(struct symbol* type);
extern struct symbol* make_array_type(struct symbol* type, int32_t size);

extern void check_expression_type(struct symbol** node, struct symbol* type);
extern void unescape(char* string);

extern void push_type(void);
extern void pop_type(void);

struct token
{
    int32_t number;
    char* string;
};

extern struct token* make_string_token(const char* string);
extern struct token* make_number_token(int32_t number);
extern void free_token(struct token* token);

extern Symbol* get_input_parameters(Subroutine* sub);
extern Symbol* get_output_parameters(Subroutine* sub);

extern void* ParseAlloc(void *(*allocator)(size_t size));
extern void ParseTrace(FILE* file, char* prompt);
extern void Parse(void* parser, int token, struct token* minor);

extern Node* mid_c_neg(int width, Node* lhs);
extern Node* mid_c_sub(int width, Node* lhs, Node* rhs);
extern Node* mid_c_mul(int width, Node* lhs, Node* rhs);

#endif
