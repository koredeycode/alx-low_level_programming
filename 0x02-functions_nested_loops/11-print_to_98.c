#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the parameter to number 98
 * @n: integer type parameter
 *
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		n++;
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
		n--;
		}
	}
	putchar('\n');
}
