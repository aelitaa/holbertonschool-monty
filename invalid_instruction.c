#include "monty.h"

/**
* invalid_instruction - Handles an unknown instruction error
*/

void invalid_instruction(void)
{
	fprintf(stderr, "Invalid instruction: %s\n", arguments->tokens[0]);
	close_stream();
	free_tokens();
	free_arguments();
	exit(EXIT_FAILURE);
}

