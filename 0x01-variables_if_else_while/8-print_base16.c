#include <stdio.h>

/**
 * main -a program that prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int letters;

	for (num = 48; num  < 58; num++)
	{
		putchar(num);
	}
	for (letters = 97; letters < 103; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
