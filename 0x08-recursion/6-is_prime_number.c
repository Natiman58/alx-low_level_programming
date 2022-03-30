#include"main.h"
/**
 * is_prime_number - is a function that
 * prints 1 if an integer is a prime number
 * otherwisse return 0
 * @n: input number
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n < 4)
		return (1);
	return (help1(n, 2));
}

/**
 * _sqrt - return square root of a number
 * @x: input number
 * @i: number incrememnt acting as divisor
 * Return: square root of 'x'.
 */
int _sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (_sqrt(x, i + 1));
}

/**
 * help1 - helper function
 * @n: input number
 * @d: divisor
 * Return: 0 if not prime, 1 if prime
 */
int help1(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (help1(n, d + 1));
}
