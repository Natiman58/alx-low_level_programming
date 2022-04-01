#include"main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to the char array string
 * @c: the character to be located in the string
 * Return: s to the first occurrence of the character in string, if not NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
