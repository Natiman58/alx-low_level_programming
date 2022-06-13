#include"main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes from memory area
 * @dest: destination
 * @src: source
 * Return: i
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i;

	i = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (i);
}
