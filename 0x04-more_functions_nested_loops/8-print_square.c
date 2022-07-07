#include "main.h"
/**
 * print_square - print a square with length dependent of the input n
 * @size: the integer, number of times the diagonal is printed
 */

void print_square(int size)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b = 1;

		while (b <= n)
		{
			int a = 1;

			while (a <= n)
			{
				_putchar('');
				a++;
			}
			_putchar('\\');
			_putchar('\n');
		b++;
		}

	_putchar('\n');
	}
}
