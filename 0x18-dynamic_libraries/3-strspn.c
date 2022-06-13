#include"main.h"
/**
 * _strspn -a function that computes the max initial segment of s
 * which consists of entirely of bytes from string pointed by accept.
 * @s: char string array pointer
 * @accept: char array containing s
 * Return: k(computed length)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (k);
}
