#include"main.h"
/**
 * main - print "_putchar" followed by new line.
 * Description: You are not allowed to include standard libs.
 * Return:Always 0;
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
		 i++;
	}
		_putchar('\n');
	return (0);
}
