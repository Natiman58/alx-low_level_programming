#include"main.h"
/**
 * _memset - fills memory with a constant byte b.
 * @s: pointer to the memory
 * @n: number of bytes
 * @b: the constant char that fills
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
