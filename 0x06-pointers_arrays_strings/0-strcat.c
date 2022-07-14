#include <stdio.h>
/**
 * _strcat - concatenate two inputted strings
 * @dest: pointer, a character
 * @src: pointer, a character
 * Return: the concatenated result
 */

char *_strcat(char *dest, char *src)
{
	int countd = 0;
	int counts = 0;

	while (dest[countd] != '\0')
	{
		countd++;
	}
	while (counts >= 0)
	{
		dest[countd] = src[counts];
		if (src[counts] == '\0')
		{
			break;
		}
		countd++;
		counts++;
	}
	return (dest);
}
