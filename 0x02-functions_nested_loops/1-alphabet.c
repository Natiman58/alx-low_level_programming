#include"main.h"
/**
 * main - entry for the programe
 * Description prints alphabets in lowercase
 * Return : Always 0.
 */

void print_alphabet(void)
{
	char c;
		for (c= 'a'; c <= 'z'; c++)
			_putchar(c);
	_putchar('\n');
}
