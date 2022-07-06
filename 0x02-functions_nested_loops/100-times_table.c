#include "main.h"
#include <stdio.h>
/**
 * times_table - prints multiplication tables of 0-9
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

			if (res <= 99)
			{
				printf("%d,   ", res);
			}
			else
			{
				printf("%d,  ", res);
			}
			}
			b++;
	}
	_putchar('\n');
	a++;
}
}
