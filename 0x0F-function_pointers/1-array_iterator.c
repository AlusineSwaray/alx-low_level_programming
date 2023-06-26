#include "function_pointers.h"

/**
 * array_iterator - function that creates array
 *
 * @array: size of array
 * @size: function pointer
 * @action: f pointer
 *
 * Return: Always 0 (Success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

