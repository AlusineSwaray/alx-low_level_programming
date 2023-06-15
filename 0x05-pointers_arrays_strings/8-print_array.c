#include "main.h"

/**
 * print_array - reverses a string array approach
 *@n: input string pointer
 *@a: array name
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
