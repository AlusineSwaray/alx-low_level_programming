#include "main.h"

/**
 * _strcpy - reverses a string array approach
 *@src: input string pointer
 *@dest: buffer pointer
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

