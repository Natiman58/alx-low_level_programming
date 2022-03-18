#include<stdio.h>
/**
 * main - a program that finds and prints the largest prime factor
 * n - number
 * a - first prime
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int a;

	for (a = 2; a <= n; a++)
	{
		if (n % 2 == 0)
		{
			n = n / a;
			a--;
		}
	}
	printf("%ld\n", a);
	return (0);
}
