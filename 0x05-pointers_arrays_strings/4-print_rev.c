#include "main.h"

/**
 * print_rev - takes a pointer to an int and update its value to 98
 *@rev: pointer to be updated
 *
 * Return: void
 */

void print_rev(char *rev)
{
	int i = 0;
	int p;

	while (*rev != '\0')/*set a condition to not print null zero*/
	{
		i++;
		rev++;/*increament the size of the pointer by itself*/
	}

	for (p = 1; p <= i; p++)
	{
		_putchar(*rev);
		rev--;
	}
	_putchar('\n');
}
