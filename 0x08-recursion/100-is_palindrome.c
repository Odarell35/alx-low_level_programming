#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int string_length = 0;

	if (*s != '\0')
	{
		string_length = 1 + _strlen_recursion(s + 1);
	}
return (string_length);
}
/**
 * check_palindrome - checks if string palindrome
 * @s: string
 * @first: first character
 * @last: last character
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int check_palindrome(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	else if (s[first] == s[last])
		return (check_palindrome(s, (first + 1), (last - 1)));
	else
		return (0);
}
/**
 * is_palindrome - checks if string palindrome
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int string_length = 1 + _strlen_recursion(s + 1);

	if (string_length == 0 || string_length == 1)
	return (1);
	return (check_palindrome(s, 0, string_length - 1));
}
