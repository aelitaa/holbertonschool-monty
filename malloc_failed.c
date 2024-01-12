#include "monty.h"

/**
 * malloc_failed - Handles the error
 */

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
free_arguments();
	exit(EXIT_FAILURE);
}
