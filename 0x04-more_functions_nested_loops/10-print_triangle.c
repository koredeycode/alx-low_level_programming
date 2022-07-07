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
			int a = size;

			while (a != 0)
			{
				/*if (a != size)
				{
					_putchar(' ');
				}
				else*/
				{
					_putchar('#');
				}
				a--;
			}
			_putchar('\n');
		b++;
		}
	}
}
