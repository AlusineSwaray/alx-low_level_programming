#include "main.h"

/**
 * _isdigit - checks for letters character
 * @p: number to be checked
 *
 * Return: 1 if digit. 0 otherwise
 */

int _isdigit(int p)
{
	if (p >= 48 && p <= 58)
		return (1);
	else
		return (0);
}
