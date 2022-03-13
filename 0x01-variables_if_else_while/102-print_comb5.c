#include <stdio.h>
/**
 * main-print all possible combinations of 2 digit numbers.
 * All numbers should be printed as 2 digits.
 * The numbers range from 0 to 99
 * All yout code must be in main fun.
 * Return: Always 0 (Succes)
 */

int main(void)
{	int thousands;
	int hunds;
	int tens;
	int ones;
		for (thousands = 0; hunds <= 99; thousands++)
		{
			for (hunds = 0; hunds <= 99; hunds++)
			{
				for (tens = 0; tens <= 99; tens++)
				{
					for (ones = 0; ones <= 99; ones++)
					{
						putchar (thousands + '0');
						putchar (hunds + '0');
						putchar (tens + '0');
						putchar (ones + '0');
					}
					if (hunds && thousands == 0)
					{
						putchar (' ');
					}
					else
					{
						putchar (' ');
						putchar (',');
					}
				}
			}
		}
	putchar('\n');
	return (0);
}

