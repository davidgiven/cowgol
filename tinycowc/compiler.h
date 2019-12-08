#ifndef COMPILER_H
#define COMPILER_H

extern int32_t number;
extern struct symbol* current_type;
extern struct argumentsspec* current_call;

extern bool is_ptr(struct symbol* sym);
extern bool is_num(struct symbol* sym);
extern bool is_snum(struct symbol* sym);
extern bool is_array(struct symbol* sym);
extern bool is_array_ptr(struct symbol* sym);
extern bool is_scalar(struct symbol* sym);
extern bool is_record(struct symbol* sym);
extern bool is_record_ptr(struct symbol* sym);

extern struct symbol* expr_add(struct symbol* lhs, struct symbol* rhs);
extern struct symbol* expr_sub(struct symbol* lhs, struct symbol* rhs);
extern struct symbol* expr_simple(struct symbol* lhs, struct symbol* rhs, void (*emitter)(int width));
extern struct symbol* expr_signed(struct symbol* lhs, struct symbol* rhs,
        void (*emitteru)(int width),
        void (*emitters)(int width));
extern void cond_simple(int truelabel, int falselabel, struct symbol* lhs, struct symbol* rhs,
        void (*emitteru)(int width, int truelabel, int falselabel),
        void (*emitters)(int width, int truelabel, int falselabel),
        void (*emitterp)(int truelabel, int falselabel)
);

extern void init_var(struct symbol* sym, struct symbol* type);
extern void init_member(struct symbol* sym, struct symbol* type);
extern struct symbol* make_pointer_type(struct symbol* type);
extern struct symbol* make_array_type(struct symbol* type, int32_t size);

extern void check_expression_type(struct symbol** node, struct symbol* type);
extern void unescape(char* string);

extern void node_is_constant(struct exprnode* node, struct symbol* type, struct symbol* sym, int32_t off);
extern void node_is_stacked(struct exprnode* node, struct symbol* type);

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

extern void* ParseAlloc(void *(*allocator)(size_t size));
extern void ParseTrace(FILE* file, char* prompt);
extern void Parse(void* parser, int token, struct token* minor);

#endif
