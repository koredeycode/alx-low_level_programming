#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenate one string to another
 * @dest: pointer, a character
 * @src: pointer, a character
 * @n: an integer
 * Return: the concatenated result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length = strlen(dest);

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
