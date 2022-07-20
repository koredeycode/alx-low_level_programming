#include "main.h"
#include <stdio.h>
/**
 * _sqhelp - returns the natural square root of a number, helper func 
 * @num: an integer parameter
 * @t: an integer parameter
 *
 * Return: an integer
 */
int _sqhelp(int num, int t)
{
	if (t % (num / t) == 0)
	{
		if ( t * (num / t) == num)
		{
			return (t);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + _sqhelp(num, (t + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of a number 
 * @n: an integer parameter
 *
 * Return: an integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqhelp(n, 2));
}
