#include <stdio.h>
/**
 * _strncmp - compare two strings
 * @s1: pointer, a character
 * @s2: pointer, a character
 * Return: the result of comparison, an integer 
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] - s2[i] == 0 && s1[i] != '\0'; i++)
	{}
	return (s1[i] - s2[i]);
}
