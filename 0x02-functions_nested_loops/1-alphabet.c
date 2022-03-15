#include"main.h"
/**
 * main - entry for the programe
 * Description-prints alphabets in lowercase
 * Using the prototype of the function in main.h
 * Return : Always 0.
 */
void print_alphabet(void)
{
		int c;
			for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
}
