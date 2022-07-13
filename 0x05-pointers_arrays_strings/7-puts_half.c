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

		while (j <= i)
		{
			printf("%c", str[j]);
			printf("\n");
			j++;
		}
	}
	else
	{
		int k = (i - 1) / 2;

		while (k <= i)
		{
			printf("%c", str[k]);
			printf("\n");
			k++;
		}
	}
}
