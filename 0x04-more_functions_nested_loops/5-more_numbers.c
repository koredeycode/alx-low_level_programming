#include "main.h"
/**
 * more_numbers - print numbers from 0-14 ten times
 * Return: (0)
 */

void more_numbers(void)
{
	int a = 0;
	int count = 0;
while (count <= 9)
{	
	while (a <= 14)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
count++;
}
_putchar('\n');
}
