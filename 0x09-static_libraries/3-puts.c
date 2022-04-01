#include"main.h"

/**
 * _puts - writes the string s and a trailing newline to stdout.
 * @str: a pointer of char type
 * Return: void
 */
void _puts(char *str)
{
	int s = 0;

	while (s >= 0)
	{
		if (str[s] == '\0')
		{
			_putchar('\n');
			break;
		}												 _putchar(str[s]);
		s++;
	}
}
