#include"main.h"
/**
 * swap_int - is a function that swaps the values of two integers
 * @a: intiger of pointer type one
 * @b: integer of pointer type two
 * Retutn: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
