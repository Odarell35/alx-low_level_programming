#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
        int i;

        for (i = 48; i <= 57; i++)
        {
		if (i != 50 && i != 52)
                _putchar(i);
        }
                _putchar('\n');
}
