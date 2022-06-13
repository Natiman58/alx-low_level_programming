#include"main.h"
/**
 * _strcat - function that appends src to dest string
 * @dest: the first string
 * @src: the second string to get appended to the first string
 * Return: a pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
