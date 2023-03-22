#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition
 * @a: integer
 * @b: integer
 * Return:  sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction
 * @a: integer
 * @b: integer
 * Return:  difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: integer
 * @b: integer
 * Return: division of a and b
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
 * op_mod -Remainder
 * @a: integer
 * @b: integer
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
