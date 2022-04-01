#include"main.h"
/**
 * _isdigit - checks if the digit 0 to 9
 * @c: inputs a number
 * Return: 1 if a number is b/n 0 and 9, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
