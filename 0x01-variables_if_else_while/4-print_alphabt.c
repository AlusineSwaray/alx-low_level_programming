#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0 unless stated otherwise
 */
int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
		putchar(ALPHA);
	putchar('\n');
	return (0);
}
