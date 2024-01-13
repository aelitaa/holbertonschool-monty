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

        if (arguments->n_tokens == 0)
        {
                return;
        }

	/* Get the instruction*/
	char *instruction = arguments->tokens[0];

	/* Check if the last character is a dollar sign*/
	size_t len = strlen(instruction);
	if (len > 0 && instruction[len - 1] == '$')
	{
	  /*If the last character is a dollar sign, ignore it*/
		instruction[len - 1] = '\0';
	}
        for (; instructions[i].opcode != NULL; i++)
        {
                if (strcmp(instructions[i].opcode, arguments->tokens[0]) == 0)
        {
                arguments->instruction->opcode = instructions[i].opcode;
                arguments->instruction->f = instructions[i].f;
                return;
        }
}
        invalid_instruction();
}
