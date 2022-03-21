#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed
 * Return: none
 */
void print_rev(char *s)
{
	int string = 0;

	while (string >= '0')
	{
		if (s[string] == '0')
		{
			break;
			string++;
		}
		for (string--; string >= 0; string--)
		{
			_putchar(s[string]);
		}
	}
	_putchar('\n');
}
