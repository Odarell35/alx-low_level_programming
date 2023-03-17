#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  mul - multiplies 2 numbers
 * @num1: number
 * @num2: number
 * Return: 0 (Success)
 */
unsigned int mul(unsigned int num1, unsigned int num2);

unsigned int mul(unsigned int num1, unsigned int num2)
{
	unsigned int mutliply;

	if (num1 != 48 && num1 <= 57)
	{
		printf("Error\n");
		exit(98);
	}
	mutliply = num1 * num2;
	printf("%d", mutliply);
	return (0);
	_putchar('\n');
}
