#include"main.h"
/**
 * more_numbers - prints numbers between 0 -14
 * each line of numbers 10 times
 * Return: no return.
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (i > 9)
				_putchar((i / 10) + 48);

			_putchar((i % 10) + 48);
		}
	}
	_putchar('\n');
}
