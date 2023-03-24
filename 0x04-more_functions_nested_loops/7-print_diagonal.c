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

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		for (space = 0; space < i; space++)/*prints space after the new line*/
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
