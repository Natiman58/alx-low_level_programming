#include<stdio.h>
/**
 * main - entry point for the main function
 * a fuction that generates the first 50 fibionacci series
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;
		printf("%lu ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu", j);
		}
		else
		{
			printf("%lu, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
