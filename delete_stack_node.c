#include "monty.h"

/**
* delete_stack_node - Removes the top element
* Return: void
*/

void delete_stack_node(void)
{
	stack_t *tmp;

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}
