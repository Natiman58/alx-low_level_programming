#include<stdio.h>
/**
 * main-main block
 * printing all possible combination of 3 digit numbers
 * The 3 digits must be different
 * you can only use 'putchar'function 6 times maximum
 * Return: Always 0 (Sucess)
 */
int main(void)
{	int hunds;
	int tens;
	int ones;
		for (hunds = 0; hunds <= 9; hunds++)
		{
			for (tens = hunds + 1; tens <= 9; tens++)
			{
				for (ones = tens + 1; ones <= 9; ones++)
				{
					putchar(hunds + '0');
					putchar(tens + '0');
					putchar(ones + '0');
					if (hunds < 7)
					{	putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
