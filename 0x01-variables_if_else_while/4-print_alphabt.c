#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -Print all the letters except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
