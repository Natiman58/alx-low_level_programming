#include "search_algos.h"

/**
 * binary_search - uses binary search
 * lgorithm to find an element in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: index of the value
 * else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int L, R, mid, i;

	L = 0;
	R = size - 1;

	if (!value || array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (L + R) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			R = mid - 1;
		else
			L = mid + 1;
	}
	return (-1);
}

