#include"main.h"
/**
 * print_number - prints integers
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int j, k, count;

	if (n < 0)
	{
		_putchar('-');
		j = n * -1;
	}
	else
	{
		j = n;
	}

	k = j;
	count = 1;

	while (k > 9)
	{
		k = k / 10;
		count = count * 10;
	}

	for (; count >= 1; count = count / 10)
	{
		_putchar(((j / count) % 10) + '0');
	}
}
