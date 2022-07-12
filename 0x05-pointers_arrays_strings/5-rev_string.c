#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string 
 * @s: pointer, a character
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	i = 0;


	while (j >= 0)
	{
		temp[i] = s[j];
		i++;
		j--;
	}
	s = temp;
}
