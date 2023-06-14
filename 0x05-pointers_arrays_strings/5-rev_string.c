#include "main.h"

/**
 * rev_string - reverses a string array approach
 *@str: input string pointer
 *
 * Return: void
 */

void rev_string(char *str)
{
	int a;
	int i = 0;

	for (a = 0; str[a] != '\0'; ++a)
	{
		i++;
	}
	for (a = i; a >= 0; --a)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
