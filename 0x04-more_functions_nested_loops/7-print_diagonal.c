#include "main.h"

/**
 * print_diagonal - prints a line on screen
 *@n: length of lines to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i < n)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
