#include "main.h"

/**
 * print_numbers-  prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
        int i;

        for (i = 48; i <= 57; i++)
        {
		if (i != 50 && i != 52)
                _putchar(i);
        }
                _putchar('\n');
}
