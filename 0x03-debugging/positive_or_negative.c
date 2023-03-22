#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative -positive or negative
 *
 * Return: 0 unless otherwise
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else if (n > 0)
		printf("%i is positive\n", n);
}
