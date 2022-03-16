#include<stdio.h>
/**
 * main - entry point for the main function
 * a fuction that generates the first 50 fibionacci series
 * Return: 0
 */
int main(void)
{
	int n1 = 0, n2 = 1, n3, count;
			for (count = 3; count <= 50; count++)
			{
				if (count < 50)
				{
					n3 = n1 + n2;
					printf("%u", n3);
					n1 = n2;
					n2 = n3;
					printf(", ");
				}
				else
				{
					return (0);
				}

			}
		printf("\n");
		return (0);
}
