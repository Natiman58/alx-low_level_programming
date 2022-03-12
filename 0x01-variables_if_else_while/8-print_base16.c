#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 16 in lowercase.
 * You can only use `putchar`only 3 times.
 * Return: 0
 */
int main(void)
{	int i;
	char letter;
		for (i = '0'; i <= '9'; i++)
			putchar (i);
		for (letter = 'a'; letter <= 'f'; letter++)
			putchar(letter);
		putchar('\n');
		return (0);
}
