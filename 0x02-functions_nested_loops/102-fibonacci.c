#include<stdio.h>
/**
 * main - entry point for the main function
 * a fuction that generates the first 50 fibionacci series
 * Return: 0
 */
int main(void)
{
	int n1 = 1, n2 = 2, n3, count;
		for (count = 3; count <= 50; count++)
		{
			n3 = n1 + n2;
			printf("%dn", n3);
			n1 = n2;
			n2 = n3;
			printf(", ");

		}
		printf("\n");
		return (0);
}