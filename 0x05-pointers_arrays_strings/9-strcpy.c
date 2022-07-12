#include <stdio.h>
/**
 * _strcpy - reset the values of the inputs
 * @dest: pointer, a character
 * @src: pointer, a character
 * Return: the length of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		int j = i / 2;

		while (j <= i)
		{
			printf("%c", str[j]);
			j++;
		}
		printf("\n");
	}
	else
	{
		int k = (i - 1) / 2;

		while (k <= i)
		{
			printf("%c", str[k]);
			k++;
		}
		printf("\n");
	}
}
