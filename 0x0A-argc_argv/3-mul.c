#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - a program that multiplies two numbers
 * followed by new line
 * assume all the numbers are intigers
 * @arc: argument count
 * @argv: array of arguments
 * print Error if the program doesnt recieve 2 arguments
 * followed by new line and
 * Return: 1
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
