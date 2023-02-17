#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
