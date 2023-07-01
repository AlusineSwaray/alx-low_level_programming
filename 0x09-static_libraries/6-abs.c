#include "main.h"

/**
 * _abs - checks for lowercase character
 * @c: letter to be checked
 *
 * Return: abs for absolute. c otherwise
 */

int _abs(int c)
{
	if (c < 0)
		return (-c);
	else
		return (c);
}
