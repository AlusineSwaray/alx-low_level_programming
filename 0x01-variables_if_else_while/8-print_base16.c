#include <stdio.h>
/**
 * main -hexadecimal printing %x %X
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
	int i;
	char hex;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
		for (hex = 'a'; hex <= 'f'; hex++)
			putchar(hex);
	putchar('\n');
	return (0);
}
