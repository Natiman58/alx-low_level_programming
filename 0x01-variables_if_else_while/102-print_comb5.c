#include <stdio.h>
/**
 * main-print all possible combinations of 2 digit numbers.
 * All numbers should be printed as 2 digits.
 * The numbers range from 0 to 99
 * All yout code must be in main fun.
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int tens;
	int ones;
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = 0; ones <= 9; ones++)
			{
				putchar(tens + '0');
				putchar(ones + '0');
			if (!(tens == 0 && ones == 0))
			{
				putchar (',');
				putchar (' ');
			}

			}
		}
	putchar('\n');
	return (0);
}

