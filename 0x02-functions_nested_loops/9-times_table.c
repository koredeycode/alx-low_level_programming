#include "main.h"
/**
 * times_table - makes multiplication table
 *
 * Return: 0
 */
void times_table(void)
{
		int a = 0;
		int b = 0;
		int res;

		while (a < 10)
		{
			while (b < 10)
			{
				res = a * b;
				_putchar('0' + res);
				_putchar(' ');
				b++;
			};
		_putchar(' ');
		a++;
		};
}
