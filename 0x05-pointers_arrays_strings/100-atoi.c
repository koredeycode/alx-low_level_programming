#include <stdio.h>
#include "main.h"
/**
 * _power - find the power of a number
 * @base: the base number
 * @exp: the exponential
 * Return: the result
 */
int _power(int base, int exp)
{
	int res = 1;

	while (exp != 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}
/**
 * _atoi - convert a string to an integer
 * @s: a string of character
 * Return: the integer
 */
int _atoi(char *s)
{
	int i;
	int j;
	int count;
	int mul = 1;
	int res = 0;

	for (i = 0; !(s[i] >= 48 && s[i] <= 57); i++)
	{
		if (s[i] == '-')
		{
			mul *= -1;
		}
	}
	j = i;
	while (s[j] >= 48 && s[j] <= 57)
	{
		j++;
	}
	/*for (j = i; s[j] >= 48 && s[j] <= 57; j++);*/
	count = j - i - 1;
	for (j = i; s[j] >= 48 && s[j] <= 57; j++)
	{
		res += (s[j] - '0') * _power(10, count);
		count--;
	}
	return (res * mul);
}
