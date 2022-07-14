#include <stdio.h>
#include <string.h>
/**
 * string_toupper - print out array characters as uppercase
 * @n: character type
 * Return: uppercase letter
 */
char *string_toupper(char *n)
{
	int n_len = strlen(n);
	int i;

	for (i = 0; i < n_len; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
