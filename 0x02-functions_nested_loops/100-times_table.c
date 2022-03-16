#include"main.h"
/**
 * print_times_table-prints times table
 * @n: takes in a number
 * Return:void
 */
void print_times_table(int n)
{
	int i = 0, k, j;
		if (n < 0 || n > 15)
		{
			return;
		}	
			while (i <= n)
				{
				for (j = 0; j <= n; j++)
				{
				k = i * j;
				if (j == 0)
				_putchar('0' + k);
				else if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + 48);
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(k / 10 + 48);
					_putchar(k % 10 + 48);
				}
				else
				{
					_putchar(k / 100 + 48);
					_putchar((k - 100) / 10 + 48);
					_putchar(k % 10 + 48);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				}
			_putchar('\n');
			i++;
		}
}
