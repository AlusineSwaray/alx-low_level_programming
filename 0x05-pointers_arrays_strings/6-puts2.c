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

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		putchar(str[i]);
		if (str[i] == '\')
			break;
	}
	putchar('\n');
}
