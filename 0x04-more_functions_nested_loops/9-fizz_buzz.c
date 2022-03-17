#include"main.h"
#include"stdio.h"
/**
 * main - a function to print 1 - 100
 * Fizz for multiples of 3
 * Buzz for multiples of 5
 * Fizz Buzz for multiples of both 3 & 5
 * @i: number
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("Fizz Buzz");
		}
	}
	printf("\n");
	return (0);
}
