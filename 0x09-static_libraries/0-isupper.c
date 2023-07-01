#include "main.h"

/**
 * _isupper - checks for letters character
 * @p: number to be checked
 *
 * Return: 1 if digit. 0 otherwise
 */

int _isupper(int p)
{
	if (p >= 48 && p < 58)
		return (1);
	else
		return (0);
}
