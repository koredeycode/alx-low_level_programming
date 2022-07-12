#include <stdio.h>
#include "main.h"
/**
 * _puts - print out a string to stdout
 * @str: pointer, a character
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		char j = str[i];
		_putchar(j);
		i++;
	}
	_putchar('\n');
}
