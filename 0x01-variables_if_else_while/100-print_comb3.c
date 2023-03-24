#include <stdio.h>
/**
 * main - double number combo 
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
	int num1, num2;

	num1 = 0;

	for (num2  = num1 + 1; num2 < num1;num2++)
	{
		putchar(num1 + '0');
		putchar(num2 + '0');
		putchar(',');
		putchar(' ');
			num1++;
	}
	putchar('\n');
	return (0);
}
