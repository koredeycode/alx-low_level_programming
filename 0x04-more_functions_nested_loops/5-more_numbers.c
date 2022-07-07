#include "main.h"
/**
 * more_numbers - print numbers from 0-14 ten times
 * Return: (0)
 */

void more_numbers(void)
{
	int count = 0;

while (count <= 9)
{
	int a = 0;

	while (a <= 14)
	{
	if (a >= 10)
	{
		_putchar('0' + a / 10);
	}
		_putchar('0' + a % 10);
		a++;
	}
	_putchar('\n');
count++;
}
}
