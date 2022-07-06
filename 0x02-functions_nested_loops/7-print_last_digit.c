#include "main.h"
/**
 * print_last_digit - returns the absolute value of the parameter
 *
 * @n: parameter of the int type
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int nn;

	if (n < 0)
	{
		nn = -1 * (n % 10);
		_putchar(nn + '0');
		return (nn);
	}
	else
	{
		nn = n % 10;
		_putchar(nn + '0');
		return (nn);
	};
}
