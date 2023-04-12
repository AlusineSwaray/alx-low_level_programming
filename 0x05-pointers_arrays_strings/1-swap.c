#include "main.h"

/**
 * swap_int - takes a pointer to an int and update its value to 98
 *@a: pointer to be updated
 *@b: swapped
 *
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
