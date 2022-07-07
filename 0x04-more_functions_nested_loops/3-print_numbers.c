#include "main.h"
/**
 * print_numbers - print numbers from 0-9
 * Return: (0)
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
	return (0);
}
