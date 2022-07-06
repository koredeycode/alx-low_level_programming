#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints multiplication tables of 0-9
 *
 * @n : integer type variable
 *
 * Return: 0
 */
void print_times_table(int n)
{
if (n <= 15 && n != 0)
{
	int a = 0;

	while (a <= n)
	{
		int b = 0;
		int res;

		while (b <= n)
		{
			res = a * b;

		if (b != 9)
		{
			if (res <= 99)
			{
				printf("%d,   ", res);
			}
			else
			{
				printf("%d,  ", res);
			}
		}
		else
		{
			printf("%d", res);
		}
			b++;
		}
	a++;
	}
	_putchar('\n');
}
}
