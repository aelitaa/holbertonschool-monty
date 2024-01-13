#include "monty.h"
/*
 * delete_stack_node - Remove the head/top of the stack.
 * Return: void
 */
void delete_stack_node(void)
{
	stack_t *tmp;

	if (arguments->head != NULL)
	{
		tmp = arguments->head;
		arguments->head = tmp->next;
		free(tmp);
	}
}

