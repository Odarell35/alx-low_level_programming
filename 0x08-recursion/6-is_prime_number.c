#include "main.h"

/**
 * checks_prime -checks if a number is a prime number
 * @num: input number
 * @i: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int checks_prime(unsigned int num, unsigned int i)
{
	if (num % i == 0)
	{
		if (num == i)
			return (1);
		else
			return (0);
	}
	return (0 + checks_prime(num, i + 1));
}
/**
 * is_prime_number - returns true  prime number
 * @n: number
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (checks_prime(n, 2));
}
