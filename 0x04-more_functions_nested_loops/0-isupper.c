#include"main.h"

/**
 * _isupper- checks if the parameter is an uppercase.
 * @c: takes in a character
 * Return: 1 if the character is upppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
