#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *sout;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	sout = malloc((len1 + len2 + 1) * sizeof(char));
	if (sout == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < (len1 + len2 + 1); i++)
	{
		if (i < len1)
		{
			sout[i] = s1[i];
		}
		else
		{
			sout[i] = s2[j++];
		}
	}
	return (sout);
}
