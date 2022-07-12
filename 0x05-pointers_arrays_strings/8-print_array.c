#include <stdio.h>
/**
 * print_array - print array
 * @a: pointer, a character
 * @n: pointer, a character
 * Return: nothing
 */

void print_array(int *a, int n)
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
			j++;
		}
		printf("\n");
	}
	else
	{
		int k = (i - 1) / 2;

		while (k <= i)
		{
			printf("%c", str[k]);
			k++;
		}
		printf("\n");
	}
}
