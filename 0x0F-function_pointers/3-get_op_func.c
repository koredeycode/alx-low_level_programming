#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - select the correct function to peform the operation
 * @s: the inputted string
 * Return: the pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
