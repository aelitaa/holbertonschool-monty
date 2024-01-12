#include "monty.h"

/**
* is_number - Checks if a string is a valid integer
* @str: String
* Return: 1 if the string is a valid number, 0 otherwise
*/

int is_number(char *str)
{
  int i, len = strlen(str);

	if (str == NULL)
	{
		return 0;
	}

	for (i = 0; i < len; i++)
	{
	if ((!isdigit(str[i]) && i != len - 1) || (i == len - 1 && str[i] != '$'))
	return 0;
	}
	return(1);
}
