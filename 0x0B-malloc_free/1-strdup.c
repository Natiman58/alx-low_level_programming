#include"main.h"
#include<stdlib.h>
/**
 * _strdup-returns a pointer to a newly allocated space in memory,
 * w/h contains a copy of the string as a parameter
 * @str: the string to duplicate
 * i: i'th element in the string
 * c: the copy string
 * Return: NULL if the if the str is NULL or
 * insufficient memory was available
 * if not it returns the pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *s;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(sizeof(*s) * i + 1);
	if (s == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[c] = '\0';
	return (s);
}
