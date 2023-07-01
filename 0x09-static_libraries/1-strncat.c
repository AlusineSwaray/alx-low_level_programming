#include "main.h"

/**
 * _strncat - reverses a string array approach
 *@src: input string pointer
 *@dest: buffer pointer
 *@n: size of src that will be appended
 *
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*ptr = *src;
			ptr++;
			src++;
		}
	}
	*ptr = '\0';
	return (dest);
}

