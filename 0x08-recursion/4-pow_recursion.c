#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to y
 * @x: the base number
 * @y: the power
 *
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
