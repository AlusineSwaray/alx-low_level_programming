#include "main.h"

/**
 * create_array - function that creates array
 *
 * @size: size of array
 * @c: n bytes of @src
 *
 * Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(c));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

