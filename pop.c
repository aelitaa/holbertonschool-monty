#include "monty.h"

/**
* pop - Removes the top element
* @stack: Pointer to the stack
* @line_number: Line no where pop will be called
*/

void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2,"L%d: can't pop an empty stack\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	delete_stack_node();
	arguments->stack_length -= 1;
}
