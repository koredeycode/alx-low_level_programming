#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalize words in a string
 * @n: character type
 * Return: uppercase letter
 */
char *cap_string(char *n)
{
	int n_len = strlen(n);
	int i;

	for (i = 0; i < n_len; i++)
	{
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n'
		|| n[i] == ',' || n[i] == ';' || n[i] == '.'
		|| n[i] == '!' || n[i] == '?' || n[i] == '"'
		|| n[i] == '(' || n[i] == ')' || n[i] == '{'
		|| n[i] == '}')
		{
			if ((n[i + 1] >= 'a' && n[i + 1] <= 'z'))
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
		else if (n[0] >= 'a' && n[0] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
