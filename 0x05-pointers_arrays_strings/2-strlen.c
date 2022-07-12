#include <stdio.h>
/**
 * _strlen - reset the values of the inputs
 * @s: pointer, a character
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
