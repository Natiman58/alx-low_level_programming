#include<stdio.h>
/**
 * main - a program that finds and prints the largest prime factor
 * n - number
 * a - first prime
 * Return: 0
 */

int main(void)
{
	long i, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
