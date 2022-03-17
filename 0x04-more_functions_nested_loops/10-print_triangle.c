#include"main.h"
/**
 * print_triangle - prints a triangle, using the chx #
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int ver, hor;

	if (size > 0)
	{
		for (ver = 1; ver <= size; ver++)
		{
			for (hor = size - ver; hor > 0; hor--)
			{
				_putchar(' ');
			}
			for (hor = 0; hor < ver; hor++)
				_putchar('#');
			if (ver == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
