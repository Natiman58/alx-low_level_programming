#include"main.h"
/**
 * _puts_recursion - a function that prints strings
 * followed by new line
 * @s: the input string
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
