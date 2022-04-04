#include"main.h"
#include<stdlib.h>

/**
 * create_array - creats array of chars and initializes
 * with a specific char
 * @size: size of the array in bytes
 * @c: the character in the array
 * s - pointer to the character
 * i - i'th element in the array
 * Return: NULL if size = 0 or if it fails
 * if not returns a pointe(s)r to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
