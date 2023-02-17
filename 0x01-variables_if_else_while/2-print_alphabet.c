#include<stdio.h>
/**
 * main-  prints the alphabet in lowercase
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int letter;

	for (letter = 0; letter < 26; letter++)
	{
		putchar(alphabet[letter]);
	}
	putchar('\n');
	return (0);
}
