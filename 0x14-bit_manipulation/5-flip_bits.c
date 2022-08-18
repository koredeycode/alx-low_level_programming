#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: the inputted number
 * @m: number to change to
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int N, M;

	while (n != 0 || m != 0)
	{
		N = n & 1;
		M = m & 1;
		if (N ^ M)
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
