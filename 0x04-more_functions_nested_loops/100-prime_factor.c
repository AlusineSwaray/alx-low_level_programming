#include <stdio.h>
/**
 * main - prime factors 
 *
 * Return: 0 unless otherwise
 */
int main(void)
{
	int i, prime;

	long int n = 612852475143;
	

	printf("The prime factors of %ld are :", n);

	for (i = 1; i <= n; i++)
	{
		prime = n % i;
		if (prime == 0)
		{
			printf("%d", i);
			if (i != n)
			{
				printf(", ");
			}
		}
	}
	return (0);
}
