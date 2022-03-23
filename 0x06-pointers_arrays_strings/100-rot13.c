#include"main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string to be encoded
 * Return: the pointer to destination
 */
char *rot13(char *s)
{
	int i;
	int count = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_letters[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == letters[i])
			{
				*(s + count) = rot_letters[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
