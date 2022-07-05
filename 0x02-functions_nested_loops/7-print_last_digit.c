#include "main.h"
/**
 * _print_last_digit - returns the absolute value of the parameter
 *
 * @n: parameter of the int type
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	};
}
