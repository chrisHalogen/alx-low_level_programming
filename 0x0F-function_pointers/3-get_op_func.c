#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - select the correct operation
 * @s: input string for the operator
 * Return: function pointer for operator
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

	int count;

	count = 0;
	while (count < 5)
	{
		if (ops[count].op[0] == s[0])
			return (ops[count].f);
		count++;
	}

	return (NULL);
}
