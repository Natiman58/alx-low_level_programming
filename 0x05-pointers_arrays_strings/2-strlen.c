#include"main.h"
/**
 * _strlen-function calculates the length of the string pointed to by s
 * excluding the terminating null byte ('\0').
 * @s: is pointer of char type
 * Return: length of the string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '0'; c++)
		;
	return (c);
}
