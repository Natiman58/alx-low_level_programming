#include"main.h"
#include<stdlib.h>
/**
 * argstostr - concatnets all the arguments
 * @ac: argument count
 * @av: argument value
 * Return: NULL if ac or av are null or fail
 * if not return pointer(b) to the the fun
 */
char *argstostr(int ac, char **av)
{
	char *a, *b;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;
	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);
	b = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (b);
}
