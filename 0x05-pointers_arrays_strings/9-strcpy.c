#include "main.h"

/**
 * _strcpy - reverses a string array approach
 *@dest: input string pointer
 *@src: array name
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *new_dest;

	new_dest = dest;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (new_dest);
}
