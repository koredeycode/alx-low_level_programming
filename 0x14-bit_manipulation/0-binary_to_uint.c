#include "main.h"

/**
 * _power - return the result of base to power exp
 * @base: unsigned int
 * @exp: unsigned int
 * Return: the result
 */
unsigned int _power(unsigned int base, unsigned int exp)
{
	unsigned int res = 1;

	while (exp--)
	{
		res *= base;
	}
	return (res);
}
/**
 * check - check if the string contain another character
 * @b: string
 * Return: 0 or 1
 */
unsigned int check(const char *b)
{
	unsigned int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number or 0 if b is NULL or b contain chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, ret, sum = 0;

	if (b == NULL || check(b) == 0)
	{
		return (0);
	}
	ret = atoi(b);
	if (ret == 0)
		return (ret);
	while (ret != 0)
	{
		sum += (ret % 10) * _power(2, i);
		i++;
		ret /= 10;
	}
	return (sum);
}
