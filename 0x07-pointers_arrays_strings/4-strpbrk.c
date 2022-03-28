#include"main.h"
/**
 *_strpbrk - function locates string of any byte similar with accept
 * @s: string
 * @accept: a string to match with s
 * Return: pointer (p) if not NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
