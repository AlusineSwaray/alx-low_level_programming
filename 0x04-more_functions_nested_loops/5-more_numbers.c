#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int c;
	int i = 0;

	while ( i < 10)
	{
			for (c = 0; c < 14; c++)
			{

				putchar(c);

			}
			putchar('\n');
			i++;
	}
	
}
