#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 *
 * Retirn: Always 0 (Sucess)
 */

int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%s is zero.\n", n);
	else if (n < 0)
		printf("%s is negative.\n", n);
	else
		printf("%s is positive.\n", n);

	return (0);
}
