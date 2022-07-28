#include <stdlib.h>

/**
 * _strlen - measure the length of a string
 * @s: the inputted string
 * Return: the string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - function that concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of memory bytes
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	str = malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}
