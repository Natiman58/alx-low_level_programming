#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 16 in lowercase.
 * You can only use `putchar`only 3 times.
 * Return: 0
 */
int main(void)
{	char digit;
	for (digit = 0; digit <= 9; digit++)
		putchar(digit);
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
