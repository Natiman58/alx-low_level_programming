#include"main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed
 * Return: none
 */
void print_rev(char *s)
{
	int let_num;

	for (let_num = 0; s[let_num] != '\0'; let_num++)
	{

	}
	for (let_num = let_num - 1; let_num >= 0; let_num--)
	{
		_putchar(s[let_num]);
	}
	_putchar('\n');
}
