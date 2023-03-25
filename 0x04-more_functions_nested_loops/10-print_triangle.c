#include "main.h"

/**
 * print_triangle - prints a line on screen
 *@size: size of triangle to be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int height;
	int length;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (space = size - height; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (length = 1; length <= height; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
