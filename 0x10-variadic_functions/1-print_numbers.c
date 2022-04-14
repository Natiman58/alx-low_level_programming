#include"variadic_functions.h"
#include<stdio.h>

/**
 * print_numbers-prints numbers given as parameters followd by new line
 * @separator: string to be printed b/n numbers
 * @n: numbers passed as parameters
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			if (!separator)
				printf("%d", va_arg(args, int));
			else if (separator && i == 0)
				printf("%d", va_arg(args, int));
			else
				printf("%s,%d", separator, va_arg(args, int));
		}
		va_end(args);
		printf("\n");
}
