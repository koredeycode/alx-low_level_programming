#include "main.h"
/**
 * print_triangle - print a triangle dependent of the input size
 * @size: the integer
 */

void print_triangle(int size)
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
			int c = 1;
			int d = 1;

			while (c <= (size - b))
			{
				_putchar(' ');
				c++;
			}
			while (d <= b)
			{
				_putchar('#');
				d++;
			}
			_putchar('\n');
			b++;
		}
	}
}
