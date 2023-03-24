#include "main.h"

/**
 * print_line - prints a line on screen
 *@n: length of lines to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	putchar('\n');
}
