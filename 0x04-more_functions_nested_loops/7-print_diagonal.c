#include"main.h"
/**
 * print_diagonal - prints '\' n number of times.
 * @n: a number
 * Return: 0
 */
void print_diagonal(int n)
{
	int len, gap;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (gap = 0; gap < len; gap++)
				_putchar(' ');
			_putchar('\\');
			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
