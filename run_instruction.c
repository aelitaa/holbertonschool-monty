#include "monty.h"

/**
 * run_instruction - Runs the instructions
 */

void run_instruction(void)
{
	stack_t *stack = NULL;
	
	if (arguments == NULL)
	{
		fprintf(stderr, "Arguments is NULL.\n");
		exit(EXIT_FAILURE);
	}

	if (arguments->instruction == NULL)
	{
		fprintf(stderr, "Instruction is NULL.\n");
		exit(EXIT_FAILURE);
	}

	if (arguments->instruction->f == NULL)
	{
		fprintf(stderr, "Function pointer null\n");
		exit(EXIT_FAILURE);
	}

	if (arguments->n_tokens == 0)
		return;

	arguments->instruction->f(&stack, arguments->line_number);
}
