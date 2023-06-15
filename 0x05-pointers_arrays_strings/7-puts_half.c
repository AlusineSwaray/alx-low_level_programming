#include "main.h"

/**
 * puts_half - reverses a string array approach
 *@str: input string pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length;
	int n, i;

	while (str[length] != '\0')/*find string length*/
		length++;
	if (length % 2 == 0)/*condition for even or odd number of items*/
		n = length / 2;
	else
		n = (length - 1) / 2;
	for (i = n; i <= length; i++)/*loop to print out the second half of string*/
		putchar(str[i]);
	putchar('\n');
}
