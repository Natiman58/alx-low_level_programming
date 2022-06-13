#include"main.h"
/**
 *_strncat-function concatenates strings using at most n bytes from src(source)
 * @dest: destination file
 * @src: source file
 * @n: the max file number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0 && j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
