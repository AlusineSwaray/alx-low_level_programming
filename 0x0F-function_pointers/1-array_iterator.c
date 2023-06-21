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
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

