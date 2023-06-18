#include "main.h"

/**
 * reverse_array - reverses an array
 *@a: array
 *@n: number of elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int ch; /*temp storage*/
	int i;

	for (i = 0; i <= n / 2; i++)
	{
		ch = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ch;
		n--;
	}
}

