#include "main.h"

/**
 * _strncpy - copies a string to the buffer dest
 *@src: input string pointer
 *@dest: buffer pointer
 *@n: size of src that will be appended
 *
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	for (; i < n; i++)
	{
		ptr[i] = '\0';
	}
	return (dest);
}

