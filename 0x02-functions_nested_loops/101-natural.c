#include<stdio.h>
/**
 * main-main block
 * Description: computes and prints the sum of all the multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;
		while (sum < 1024)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum += i;
			}
		}
		printf("%i\n", sum);
		return (0);
}
