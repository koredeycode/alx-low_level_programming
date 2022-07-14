#include <stdio.h>
/**
 * _strcpy - reset the values of the inputs
 * @dest: pointer, a character
 * @src: pointer, a character
 * Return: the length of the string
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		dest[count] =  src[count];
		if (src[count] == '\0')
		{
			break;
		}
		count++;
	}
	return (dest);
}
