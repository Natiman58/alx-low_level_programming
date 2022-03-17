#include"main.h"
/**
 * print_line - prints "_" n number of times
 * @n: an integer
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_' * n);
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
