#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using Binary search
 * @array: array to search in
 * @size: number of elements in array
 * @value: The value to search for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = (int)size - 1;
	i = start;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: %d", array[start]);

		while (++i <= end)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
		i = start;
	}
	return (-1);

}
