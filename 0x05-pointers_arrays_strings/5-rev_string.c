#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	i = 0;

	while (i < (count - 1))
	{
		j = i + 1;
		while (j > 0)
		{
			temp = str[j];
			str[j] = str[(j -1)];
			str[(j - 1)] = temp;
			j--;
		}
		i++;
	}

}
