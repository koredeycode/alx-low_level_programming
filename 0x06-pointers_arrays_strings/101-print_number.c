#include <stdio.h>
#include "main.h"
/**
 * _power - return the power of a number
 * @base: the base number
 * @exp: the exponential
 * Return: an integer
 */
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

/**
 * print_number - print a number
 * @n: inputted number
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int m;
	unsigned int x;
	unsigned int count = 1;
	unsigned int i;
	unsigned int j;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	x = m;
	while (x / 10 != 0)
	{
		count++;
		x /= 10;
	}
	x = count - 1;
	for (i = 0; i < count; i++)
	{
		j = m / (_power(10, x));
		j %= 10;
		_putchar(j + '0');
		x--;
	}
}
