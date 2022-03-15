#include "main.h"
/**
 * print_last_digit -functions thst prints the last digit of a number
 * @n: takes an integer
 * Return: returns the result
 */
int print_last_digit(int n)
{
	int last_d = n % 10;
		if (n < 0)
		{
			last_d = last_d * -1;
			_putchar(last_d + '0');
		}	return (last_d);
}
