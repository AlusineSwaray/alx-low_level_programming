#include "main.h"

/**
 * rev_string - reverses a string array approach
 *@str: input string pointer
 *
 * Return: void
 */

void rev_string(char *str)
{
	int a = 0, i = 0;
	char ch;/*temporary char storage*/

	while (str[a] != '\0')/*loop to find string length*/
	{
		a++;
	}
	a--;/*to ignore the null */
	for (i; i <= a; i++)/*reversing loop*/
	{
		ch = str[i];
		str[i] = str[a];
		str[a] = ch;
		a--;
	}
}
