#include "monty.h"
/*
 * pop - The opcode pop removes the top element of the stack
 * @stack: Pointer to stack 
 * @line_number: Unsigned int
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;

	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	delete_stack_node();
	arguments->stack_length--;
}

