#include"main.h"
#include <stddef.h>
/**
 * _strstr - function finds the first occurance of the substring
 * Terminating null bytes aren't compared
 * @needle: the substring being looked for
 * @haystack: the string that contains needle
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring isnt found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0' &&
				needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}
		if (needle[j + k] == '\0')
			return (&haystack[i]);
		j++;
		i++;
	}
	return (NULL);
}
