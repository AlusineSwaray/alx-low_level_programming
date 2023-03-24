#include "main.h"

/**
 * print_square - prints a line on screen
 *@n: length of lines to be printed
 *
 * Return: void
 */

void print_square(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
