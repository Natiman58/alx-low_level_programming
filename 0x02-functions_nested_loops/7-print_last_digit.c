#include "main.h"
/**
 * print_last_digit -functions thst prints the last digit of a number
 * @n: takes an integer
 * Return: returns the result
 */
int print_last_digit(int n)
{
	int i = n % 10;
		if (n < 0)
		{
			i = i * -1;
			_putchar(i + 48);
		}
		else
		{
			_putchar(i + 48);
		}
		return (i);
}
