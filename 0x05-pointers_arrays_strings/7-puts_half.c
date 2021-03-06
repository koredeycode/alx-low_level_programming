#include <stdio.h>
/**
 * puts_half - reset the values of the inputs
 * @str: pointer, a character
 * Return: the length of the string
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		int j = i / 2;

		while (j < i)
		{
			printf("%c", str[j]);
			j++;
		}
		printf("\n");
	}
	else
	{
		int k = ((i - 1) / 2) + 1;

		while (k < i)
		{
			printf("%c", str[k]);
			k++;
		}
		printf("\n");
	}
}
