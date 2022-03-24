#include"main.h"
/**
 * string_toupper - a function that changes all
 * the lower letters cases to uppercase
 * @s: string input.
 * Return: the string pointer s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
