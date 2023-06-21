#include "main.h"

/**
 * str_concat - function that creates array
 *
 * @s1: size of array
 * @s2: second string
 *
 * Return: Always 0 (Success)
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;

	len1 = strlen(s1) + 1;
	len2 = strlen(s2) + 1;


