#include"function_pointers.h"
#include<stdlib.h>
/**
 * array_iterator - executes function passed as a parameter
 * @array: the array to be iterated
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
