#include "variadic_functions.h"

/**
 * sum_them_all - function that sums up arguments
 * @n: size of array
 *
 * Return: Always 0 (Success)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);

	}
	va_end(ap);
	return (sum);
}
