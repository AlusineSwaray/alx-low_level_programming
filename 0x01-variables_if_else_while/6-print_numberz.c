#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0 unless stated otherwise
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num % 10 + '0');
	putchar('\n');
	return (0);
}
