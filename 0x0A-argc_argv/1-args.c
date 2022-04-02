#include"main.h"
#include<stdio.h>
/**
 * main - prints the number of arguments passed to it
 * followed by a new line
 * @argc: the number of arguments
 * @argv: the array of pointers to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
