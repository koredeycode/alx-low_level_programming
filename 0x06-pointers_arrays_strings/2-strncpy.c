#include <stdio.h>
/**
 * _strncpy - copy from one string to another
 * @dest: pointer, a character
 * @src: pointer, a character
 * @n: an integer
 * Return: the concatenated result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
