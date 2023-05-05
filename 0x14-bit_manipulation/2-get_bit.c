include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index, starting at 0
 * Return: the value of the bit at index index or -1 if an error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i;
unsigned long int *bit_arr;
int k;

bit_arr = NULL;
k = -1;
i = 0;
bit_arr = malloc(sizeof(unsigned long int) * 64);
if (bit_arr == NULL)
return (-1);

while (n > 0)
{
bit_arr[i] = n & 1;
n >>= 1;
i++;
}

if (index < i)
k = bit_arr[index];

free(bit_arr);
return (k);
}
