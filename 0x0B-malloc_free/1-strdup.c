#include "main.h"

/**
 * _strdup - function that creates array
 *
 * @str: size of array
 *
 * Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	unsigned int a;
	unsigned int i = 0;
	char *new_mem;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	new_mem = malloc(i * sizeof(char) + 1);

	if (new_mem == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < i; a++)
	{
		new_mem[a] = str[a];
	}
	new_mem[i] = '\0';

	return (new_mem);
}

