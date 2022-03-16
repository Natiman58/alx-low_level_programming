#include<stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2
 * Numbers should be separated by coma and space respectively
 * Return: 0
 */
int main(void)
{
	unsigned long int i1 = 0, j1 = 1, i2 = 0, j2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;
		printf("%lu, %lu, ", i1, i2);
	for (count = 2; count < 98; count++)
	{
		if (i1 + i2 > LARGEST || j2 > 0 || j1 > 0)
		{
			hold1 = (i1 + i2) / LARGEST;
			hold2 = (i1 + i2) % LARGEST;
			hold3 = j1 + j2 + hold1;
			j1 = j2, j2 = hold3;
			i1 = i2, i2 = hold2;
			printf("%lu%010lu", j2, i2);
		}
		else
		{
			hold2 = i1 + i2;
			i1 = i2, i2 = hold2;
			printf("%lu", i2);
		}
		if (count != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
