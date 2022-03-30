#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to be measured
 * @l - length of the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s != '\0')
	{
		l = 1 + _strlen_recursion(s + 1);
	}
	return (l);
}
