#include"main.h"
/**
 * print_chessboard - a function that prints chessboard
 * @a: 2D array of characters
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	y = 0;
	while (y < 8)
	{

		x = 0;
		while (x < 8)
		{

			_putchar(a[x][y]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
