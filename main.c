#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - Entry point
 * @argc: No of arguments
 * @argv: A pointer to an array containing args
 * Return: 0
 */
int main(int argc, char **argv)
{
size_t n = 0;

	validate_arguments(argc);
	initialize_arguments();
	if (arguments == NULL) {
	fprintf(stderr, "Failed to allocate memory for arguments.\n");
	exit(EXIT_FAILURE);
	}
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
        	arguments->line_number += 1;
		tokenize_line();
		get_instruction();
		run_instruction();
		free_tokens();

	}

	close_stream();
	free_arguments();

	return (0);
}
