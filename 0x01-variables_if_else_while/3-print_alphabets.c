#include<stdio.h>
/**
 * main - main block
 * Description: use putchar fun to print alphabets in both cases
 * Return:0
 */
int main(void)
{	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
