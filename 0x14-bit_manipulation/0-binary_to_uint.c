#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 * Return: the converted number or 0 if b is NULL or b contain chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, bt;

	if (!b)
		return (0);
	i = 0;
	len = strlen(b);
	for (len--, bt = 1; len >= 0; len--, bt *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			i += bt;
	}
	return (i);
}
