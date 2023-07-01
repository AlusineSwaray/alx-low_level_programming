#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the program name followed by new line
 * @argc: number/count arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int j = 0;

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);

}
