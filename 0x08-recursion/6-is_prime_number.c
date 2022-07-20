#include "main.h"
#include <stdio.h>
/**
 * _primhelp - returns if a number is prime or not, helper func
 * @num: an integer parameter
 * @t: an integer parameter
 *
 * Return: an integer
 */
int _primhelp(int num, int t)
{
	if (num % t == 0)
	{
		if (num == t)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + _primhelp(num, (t + 1)));
}
/**
 * _sqrt_recursion - returns if a number is prime or not
 * @n: an integer parameter
 *
 * Return: an integer
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (_primhelp(n, 2));
}
