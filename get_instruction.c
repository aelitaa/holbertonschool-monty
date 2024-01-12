#include "monty.h"

/**
* get_instruction - get instructions
*/

void get_instruction(void)
{
	int i = 0;

	instruction_t instructions[] =
	{
		{"push", &push}, {"pall", &pall}
	};

	if (arguments->n_tokens == 0) /* no instructions */
		return;

	for (; instructions[i].opcode != NULL; i++)
	{
		/* compare opcode of instruction to first token (instruct..) */
		if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
	{
		arguments->instruction->opcode = instructions[i].opcode;
		arguments->instruction->f = instructions[i].f;
		return;
	}
}

	invalid_instruction();
}
