#include <stdio.h>
/**
 * _strcpy - reset the values of the inputs
 * @dest: pointer, a character
 * @src: pointer, a character
 * Return: the length of the string
 */

char *_strcpy(char *dest, char *src)
{
	char temp[];

	temp = dest;
	dest = src;
	src = temp;
}
