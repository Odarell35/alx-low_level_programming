#include "main.h"
/**
 * _puts_recursion -  prints a string
 * @s: string to be printed
 * Return: nothing
 */
char _puts_recursion(char *s)
{
	char temp1;
	if (*s != '\0')
	{
		_putchar(*s);
		temp1 =  _puts_recursion(s + 1);
		return (temp1);
	}
	else
		_putchar('\n');
}

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string
 * Return: nothing
 */
char _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		char temp2;
		_print_rev_recursion(s + 1);
		temp2 = _putchar(*s);
		return (temp2);
	}
}
/**
 * is_palindrome - checks if string palindrome
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (temp1 == temp2)
		return (1);
	else
return(0);
}
