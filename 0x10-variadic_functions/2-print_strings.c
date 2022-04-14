#include"variadic_functions.h"
#include<stdio.h>
/**
 * print_strings-prints the strings followed by separators
 * @separator: the string to be printed b/n strings
 * @n: is number of arguments passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (!str)
				str = "(nil)";
			if (!separator)
				printf("%s", str);
			else if (separator && i == 0)
				printf("%s", str);
			else
				printf("%s%s", separator,str);
		}
		printf("\n");
		va_end(args);

}
