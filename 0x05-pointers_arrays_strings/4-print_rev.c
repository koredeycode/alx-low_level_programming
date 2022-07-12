#include <stdio.h>
#include "main.h"
/**
 * _print_rev - print out a string to stdout but in reverse
 * @s: pointer, a character
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0 )
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
