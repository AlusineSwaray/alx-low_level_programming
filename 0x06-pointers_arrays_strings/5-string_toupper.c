#include "main.h"

/**
 * string_toupper - reverses an array
 *@ptr: pointer
 *
 * Return: void
 */
char *string_toupper(char *ptr)
{
	char *upper = ptr;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (upper);
}

