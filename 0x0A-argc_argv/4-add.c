#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * if no number is passed to the argument print 0, followed by a new line
 * if one of the numbers contains symbols that arent digit
 * print Error followed by new line and return 1
 * assume all numbers are intigers
 * Return: 0 if success and 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum;
	char *p;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
