#include "main.h"

/**
 * puts2 - reverses a string array approach
 *@str: input string pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	if (str == '\0')
	{
		return;
	}
	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
