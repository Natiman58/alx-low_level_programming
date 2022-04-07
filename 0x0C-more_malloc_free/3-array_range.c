#include"main.h"
#include<stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum range of the array
 * @max: maximum range of of the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, array_size;

	if (min > max)
		return (NULL);

	array_size = max - min + 1;

	ptr = malloc(sizeof(int) * array_size);

	if (ptr == 0)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
