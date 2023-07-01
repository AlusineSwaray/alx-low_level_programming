#include <stdio.h>
/**
 * main - prints the program name followed by new line
 * @argc: number/count arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
