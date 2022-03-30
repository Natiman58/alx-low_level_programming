#include"main.h"
/**
 * _print_rev_recursion - prints the string in reverse order
 * @s: the string to be printed
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
	return;
}
