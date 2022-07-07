#include "main.h"
/**
 * print_diagonal - print line with length dependent of the input n
 * @n: the integer, number of times the diagonal is printed
 */

void print_diagonal(int n)
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

			while (a <= (b - 1))
			{
				_putchar(' ');
				a++;
			}
			_putchar('\\');
			_putchar('\n');
		b++;
		}

	_putchar('\n');
	}
}
