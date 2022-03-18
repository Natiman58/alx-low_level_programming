#include<stdio.h>
#include"main.h"
/**
 * print_number - prints an integer
 * @n: the number
 * Return: void
 */

void print_number(int n)
{
	if (n < 48 || n >= 48)
	{
		_putchar(n);
	}
	else
	{
		return;
	}
	printf("\n");
}
