#include<stdio.h>
/**
 * main-main block
 * printing all possible combinations of all 2 digit numbers
 * You can only use 'putchar' only 5 times.
 * Return: Always 0 (Success)
 */
int main(void)
{	int nums;
		for (nums = 10; nums <= 99; nums++)
		{	putchar(nums + '0');
		if (nums <= 99)
		{	putchar(',');
			putchar(' ');
		}
		}
		putchar('\n');
	return (0);
}
