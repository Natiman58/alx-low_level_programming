#include "3-calc.h"
#include<stdlib.h>
/**
 * get_op_func - a function that selects the correct function to perform
 * @s: the operator passed as argument to the program
 * Return: a pointer to the function that correspondes to the operator
 * NULL if s doesnt match any of the 5 expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
