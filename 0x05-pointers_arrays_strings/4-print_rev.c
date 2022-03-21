#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed
 * Return: none
 */
void print_rev(char *s)
{
	int string = 0;

	while (string >'0')
	{
		_putchar(s[string]);
			s--;
	}
	_putchar('\n');}
