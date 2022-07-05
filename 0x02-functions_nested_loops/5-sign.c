#include "main.h"
/**
 * print_sign - check if a parameter is positive negative or 0
 *
 * @n: parameter of the int type
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('0');
		return (-1);
	}

}
