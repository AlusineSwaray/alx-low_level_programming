#include <stdio.h>
/**
 * main - fizzbuzz
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%i ", i);
	}
	printf("\n");
	return (0);
}
