#include "3-calc.h"

/**
 * op_add - adds two integers.
 * @a: first number.
 * @b: second number.
 * Return: returns addition of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers.
 * @a: first number.
 * @b: second number.
 * Return: returns subtraction of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two integers.
 * @a: first number
 * @b: second number
 * Return: returns multiplication of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers.
 * @a: first number.
 * @b: second number.
 * Return: returns the division of the two numbers.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two integers.
 * @a: first number.
 * @b: second number.
 * Return: returns the modulus of the two numbers
 */
int op_mod(int a, int b)
{
	if (b ==0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
