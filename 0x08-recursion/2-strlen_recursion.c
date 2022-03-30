#include "main.h"
/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to be measured
 * Return: none
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
}
