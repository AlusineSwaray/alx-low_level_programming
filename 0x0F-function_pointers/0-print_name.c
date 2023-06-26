#include "function_pointers.h"

/**
 * print_name - function that creates array
 *
 * @name: size of array
 * @f: function pointer
 *
 * Return: Always 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
