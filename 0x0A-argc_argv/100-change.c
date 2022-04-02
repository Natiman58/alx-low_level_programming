#include<stdio.h>
#include<stdlib.h>
/**
 * main - a program that prints the minimum number of coins_req
 * to make change for an amount of money
 * @argc: argument count
 * @argv: array of arguments entered
 * if the argument passed isnt one print Error
 * followed by new line and return 1
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int cents, coins_req = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		coins_req += 1;
	}
	printf("%d\n", coins_req);
	return (0);
}
