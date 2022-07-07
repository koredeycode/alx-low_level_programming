#include "main.h"
/**
 * print_square - print a square with length dependent of the input n
 * @size: the integer, number of times the diagonal is printed
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b = 1;

		while (b <= size)
		{
			int a = 1;

			while (a <= size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
		b++;
		}
	}
}
