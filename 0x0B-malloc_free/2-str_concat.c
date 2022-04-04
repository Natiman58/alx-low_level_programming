#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 * if not return the pointer(i)
 */
char *str_concat(char *s1, char *s2)
{
	char *i;
	int j, k, l, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;

	i = malloc((j * sizeof(*s1)) + (k * sizeof(*s2)) + 1);

	if (i == NULL)
		return (NULL);
	for (l = 0, m = 0; l < (j + k + 1); l++)
	{
		if (l < j)
			i[l] = s1[l];
		else
			i[l] = s2[m++];
	}
	return (i);
}
