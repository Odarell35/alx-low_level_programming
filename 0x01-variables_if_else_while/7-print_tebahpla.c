#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
