#include <stdio.h>
/**
 * main - combo quiz
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i == 9)
			break;
			putchar(',');
				putchar(' ');
	}
	putchar('\n');
	return (0);
}
