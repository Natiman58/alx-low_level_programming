#include<stdlib.h>
#include"function_pointers.h"
/**
 * int_index - searched for an integer
 * @array: the array to search in
 * @size: size of the array
 * @cmp: a pointer to the comparing function
 * Return: the index of the first element if cmp != NULL
 * if no elemwnt matches or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
