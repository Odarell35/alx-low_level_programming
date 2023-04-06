#include "main.h"

/**
 * power -  recursively calculates the power of the base to the exponent.
 * @base: number
 * @exponent: number
 * Return: powered number 
*/

double power(double base, int exponent) 
{
    if(exponent == 0)
    {
        return (1);
    }
    else if(exponent > 0)
    {
        return base * power(base, exponent-1);
    }
    else
    {
        return 1 / power(base, -exponent);
    }
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if b is NULL
 * or chars in the string b are not 0 and 1
 */
 unsigned int binary_to_uint(const char *b)
 {
    unsigned int converted_number;
    unsigned int i, n;

    if (b == NULL)
    {
        return (0);
    }
    converted_number = 0;
    n = 0;
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            converted_number = converted_number + 0;
        }
        else if (b[i] == '1')
        {
            converted_number = converted_number + power(2, n);
        }
        else
        {
            return (0);
        }
        
        n++;
    }
    return (converted_number);
 }
