#include<stdio.h>
/**
 * main-main block
 * printing all possible combinations of all 2 digit numbers
 * You can only use 'putchar' only 5 times.
 * Return: Always 0 (Success)
 */
int main(void)
{	int nums;
		for (nums = 1; nums <= 99; nums++)
		{	putchar(nums + '0');
		if (nums <= 99)
		{	putchar(',');
			putchar(' ');
		if (nums <= 9)
			putchar('0');
		}
		}
		putchar('\n');
	return (0);
}
