#include"main.h"
/**
 * print_square - prints squares of chx "#"
 * @size: The size of the square
 * Returns: 0
 */
void print_square(int size)
{
	int ver, hor;

	if (size > 0)
	{
		for (ver = 0; ver < size; ver++)
		{
			for (hor = 0; hor < size; hor++)
				_putchar('#');
			if (ver == size - 1)
				continue;
			_putchar('\n');
		}


	}
	_putchar('\n');
}
