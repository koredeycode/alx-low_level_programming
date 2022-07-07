#include "main.h"
/**
 * print_line - print line with length dependent of the input n
 * @n: the integer, number of times the line is printed
 * Return: (0)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a = 1;

		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
}
