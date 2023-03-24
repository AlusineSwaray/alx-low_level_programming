#include "main.h"

/**
 * print_numbers - prints 1 to 10
 *
 * Return: void unless otherwise
 */
void print_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
