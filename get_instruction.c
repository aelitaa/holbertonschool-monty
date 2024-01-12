#include "monty.h"

/**
* get_instruction - get instructions
*/

void get_instruction(void)
{
	int i = 0;

	instruction_t instructions[] =
	{
	 {"push", &push}, {"pall", &pall}, {NULL, NULL}
	};

	printf("First token: %s\n", arguments->tokens[0]);

	if (arguments->n_tokens == 0)
	{
	printf("You my friend, will be here forever...\n");
		return;
	}
	for (; instructions[i].opcode != NULL; i++)
	{
	printf("Checking instruction: %s\n", instructions[i].opcode);

		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
	{
		arguments->instruction->opcode = instructions[i].opcode;
		arguments->instruction->f = instructions[i].f;
		printf("Matched instruction: %s\n", arguments->instruction->opcode);
		return;
	}
}
	printf("Invalid instruction encountered: %s\n", arguments->tokens[0]);
	invalid_instruction();
}
