#include"main.h"
/**
 * _strcpy - copies the string pointed by src
 * with the terminating nul byte
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;											}
	return (dest);
}
