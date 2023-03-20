#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0 unless stated otherwise
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	putchar('\n');
	return (0);
}
