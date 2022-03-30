#include"main.h"
/**
 * _sqrt_recursion - prints the squrae root of a number
 * @n: input number
 * if n doesnt have square root, return -1
 * Return: Result
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - a helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrementer to compare against 'c'
 * Return: square root if natural square root, or -1 if none found
 */

int help(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (help(c, i + 1));
	else
		return (-1);
}
