#include"main.h"
/**
 * _strlen-function calculates the length of the string pointed to by s
 * excluding the terminating null byte ('\0').
 * @s: the string to be determined
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
