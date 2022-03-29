#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: points to an array of type int
 * @size: size of the matrix
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 = sum1 + *(a + 1);
		if (i % (size - 1) == 0 && i != 0 && i < (size * size - 1))
			sum2 = sum2 + *(a + 1);
	}
	printf("%d, %d", sum1, sum2);
}
