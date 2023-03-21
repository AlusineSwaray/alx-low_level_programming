#include "main.h"

/**
 * print_last_digit - checks for lowercase character
 * @q: letter to be checked
 *
 * Return: lastdig for absolute. 0 otherwise
 */

int print_last_digit(int q)
{
	int lastdig = q % 10;

	if (lastdig < 0)
		lastdig *= -1;

	_putchar(lastdig + '0');

	return (lastdig);
}
