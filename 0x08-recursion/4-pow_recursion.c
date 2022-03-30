#include"main.h"
/**
 * _pow_recursion - returns the value of x^y
 * if y is lessthan 0 it returns -1
 * @x: base num
 * @y: power num
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	result = (x * _pow_recursion(x, y - 1));

	return (result);
}
