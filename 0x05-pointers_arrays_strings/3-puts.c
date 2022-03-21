#include"main.h"
/**
 * _puts - writes the string s and a trailing newline to stdout.
 * @str: a pointer of char type
 * Return: void
 */
void _puts(char *str)
{
	int string = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		string++;
	}
	_putchar('\n');
}
