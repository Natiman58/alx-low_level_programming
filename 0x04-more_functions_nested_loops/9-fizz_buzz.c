#include<stdio.h>
/**
 * main - a function to print 1 - 100F
 * prints FizzBuzz for of 3 and 5
 *        Buzz for multiples of 5
 *        Fizz for multiples of 3
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");

	}
	printf("\n");
	return (0);
}
