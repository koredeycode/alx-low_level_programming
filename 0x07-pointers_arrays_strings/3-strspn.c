#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer, string
 * @accept: a pointer, string
 *
 * Return: an unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int res = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				res++;
				break;
			}
		}
		if (s[j] == '\0')
		{
			return (res);
		}
	}

	return (res);
}
