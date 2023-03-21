#include "main.h"
/**
 * main - function that prints the alphabet
 *
 * Return: 0 unless otherwise
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	       putchar(i + '0');
	putchar('\n');	
}
