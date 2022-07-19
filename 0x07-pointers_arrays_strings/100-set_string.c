#include "main.h"
#include <stdio.h>
/**
 * set_string - set the value of a pointer to a char
 * @s: a character pointer
 * @to: a character pointer
 *
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
