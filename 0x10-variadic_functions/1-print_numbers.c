#include "variadic_functions.h"

/**
 * print_numbers - function that sums up arguments
 * @separator: size of array
 * @n: numbers
 *
 * Return: Always 0 (Success)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

