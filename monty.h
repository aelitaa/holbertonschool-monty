#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
void validate_arguments(int argc);
void initialize_arguments(void);
void get_stream(char *fileName);
void malloc_failed(void);
void tokenize_line(void);
void get_instruction(void);
void run_instruction(void);
void free_tokens(void);
void close_stream(void);
int is_number(char *str);
void invalid_instruction(void);
void free_arguments();
void free_head(void);
void free_all_args(void);
void delete_stack_node(void);
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

void free_stack(stack_t *head);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * @stream: File that connects to the stream from file
 * @line: string which will be the line of text read from stream
 * struct arg_s: hold variables
 *
 * Description: hold variables that will be used
 * in different functions of the project as well as variables
 * that will require memory allocation and freeing
 */
typedef struct arg_s 
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	instruction_t *instruction;
	stack_t *head;
	int stack_length;
} arg_t;

extern arg_t *arguments;

void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);




#endif
