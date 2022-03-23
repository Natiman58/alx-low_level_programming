#include"main.h"
/**
 *_strcmp -function compares the two strings
 * @s1: first string to be compared
 * @s2: second string
 * Return: 0 if s1 and s1 are equal, if not return their difference(diff)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		diff = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (diff);
}
