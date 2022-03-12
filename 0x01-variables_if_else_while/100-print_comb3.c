#include<stdio.h>
/**
 * main-main block
 * printing all possible combinations of all 2 digit numbers
 * You can only use 'putchar' only 5 times.
 * Return: Always 0 (Success)
 */
int main(void)
{	int tens;
	int ones;
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{	putchar(tens + '0');
				putchar(ones + '0');
			if (tens <= 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
