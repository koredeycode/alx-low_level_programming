#include "main.h"
/**
 * print_diagonal - print line with length dependent of the input n
 * @n: the integer, number of times the diagonal is printed
 * Return: (0)
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

			while (a <= b)
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
