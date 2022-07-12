#include <stdio.h>
#include "main.h"
/**
 * puts2 - print out a string to stdout
 * @str: pointer, a character
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char j = str[i];

		if ((i % 2) == 0)
		{
			_putchar(j);
		}
		i++;
	}
	_putchar('\n');
}
