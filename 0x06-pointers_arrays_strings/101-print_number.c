#include <stdio.h>
#include "main.h"

int _power(int base, int exp)
{
	int result = 1;
	
	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	return (result);
}

void print_number(int n)
{
	int x;
	int count = 1;
	int i;
	int j;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	x = n;
	while (x / 10 != 0)
	{
		count++;
		x /= 10;
	}
	x = count - 1;
	for (i = 0; i < count; i++)
	{
		j = n / (_power(10, x));
		j %= 10;
		_putchar(j + '0');
		x--;
	}
}
