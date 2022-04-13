#include "3-calc.h"

/**
 * op_add - addition operation
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first integer
 * @b: second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: first integer
 * @b: second integer
 * Return: division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the reminder of the division
 * @a: first integer
 * @b: second integer
 * Return: reminder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
