#include <stdio.h>
/**
 * main - alphabet
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
	 char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
