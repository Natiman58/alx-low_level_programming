#include"main.h"
/**
 * print_diagonal - prints '\' n number of times.
 * @n: a number
 * Return: 0
 */
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len <= n; len++)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}
