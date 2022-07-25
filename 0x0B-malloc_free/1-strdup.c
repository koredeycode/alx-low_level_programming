#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter
 * @str: the inputted string
 * Return: the pointer to the string
 */
char *_strdup(char *str)
{
	int len;
	char *arr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	arr = malloc((len + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
