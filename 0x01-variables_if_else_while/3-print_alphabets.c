#include <stdio.h>

/**
 * main -prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int letter;

	for (letter = 0; letter < 52; letter++)
	{
		putchar(alphabet[letter]);
	}
	putchar('\n');
	return (0);
}
