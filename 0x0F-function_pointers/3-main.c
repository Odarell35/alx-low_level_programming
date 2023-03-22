#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-performs calculation
 * @argc: total arguments
 * @argv: array of arguments
 * Return: integer or error if did not work
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*calculation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	calculation = get_op_func(argv[2]);
	if (calculation == NULL)
	{
		printf("Error\n");
			exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", calculation(a, b));
return (0);
}
