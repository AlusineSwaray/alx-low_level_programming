#include "3-calc.h"
/**
 * op_add - Makes the sum of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: The sum of the two parameters
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -  subtracts two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: The sum of the two parameters
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Makes the product of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: The sum of the two parameters
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Makes the division of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: The sum of the two parameters
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - Makes the modulo of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: The sum of the two parameters
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (-1);
	return (a % b);
}
