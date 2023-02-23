#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
		while (i < 10)
		{
			j = 0; 
				while (j < 15)
				{
					if (j >=10)
					{
						_putchar((j / 10) + 48);
					}
					_putchar((j % 10) +48);
					j++;
				}
			i++;
		}
}
