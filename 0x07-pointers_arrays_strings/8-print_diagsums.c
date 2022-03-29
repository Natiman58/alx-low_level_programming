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
	int i, j, sum, sum1;

	i = 0;
	j = 1;
	sum = 0;
	sum1 = 0;
	while (i < size)
	{
		sum = sum + a[(size + 1) * i];
		sum1 = sum1 + a[(size - 1) * j];
		j++;
		i++;
	}
	printf("%d, %d\n", sum, sum1);
}
