#include "main.h"
/**
 * times_table - prints multiplication tables of 0-9
 *
 * Return: 0
 */
void times_table(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;
		int res;

		while (b <= 9)
		{
			res = a * b;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			b++;
		}
	_putchar('\n');
	a++;
	}
}
