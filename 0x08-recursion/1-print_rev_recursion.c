#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: an char pointer parameter
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	
	if (s[0] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(*s);
	}
}
