#include "main.h"
/**
 * print_number-prints an intiger
 * @l-floating nums
 * @j-digit
 * @k-unsigned n
 * @n: the number to be printed as a _putchar form
 * Return: void
 */
void print_number(int n)
{
	unsigned int i, j, k = n;
	double l = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			k = n * -1;
			_putchar('-');
		}

		while (l <= k)
			l *= 10;

		i = l / 10;

		while (i >= 1)
		{
			j = k / i;
			_putchar(j + '0');
			k = (k - (i * j));
			i /= 10;
		}
	}
}
