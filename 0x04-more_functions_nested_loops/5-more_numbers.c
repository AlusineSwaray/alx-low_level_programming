#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int c = 0;
	int i = 0;

	while (c < 10)
	{
		for (i = 0; i < 15; i++)/*print numbers from 0 to 14*/
		{
			if (i > 9)/* if the number has 2 digits*/
			{
				_putchar('0' + i / 10);
			}
			_putchar('0' + i % 10);/* print the ones digit*/
		}
			_putchar('\n');
			c++;
	}
}
