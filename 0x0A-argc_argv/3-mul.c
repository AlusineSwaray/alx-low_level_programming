#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program name followed by new line
 * @argc: number/count arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%i\n", a * b);
	return (0);

}
