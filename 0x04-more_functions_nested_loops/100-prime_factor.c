#include <stdio.h>

/**
 * _isprime - check if the input is a prime number
 * @n: integer type input
 * Return: 1 if it is a prime number and 0 if it is not
 */

int _isprime(int n)
{
	int i = 2;
	int control = 0;

	while (i <= n / 2)
	{
		if (n % i == 0)
		{
			control++;
			break;
		}
		i++;
	}
	if (control == 0 && n != 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isfactor - check if the input is a factor of the number num
 * @n: integer type of input
 * Return: 1 if is a factor and 0 if it is not
 */

int _isfactor(int n)
{
	long int num = 1231952;

	if (n > 0)
	{
		if (num % n == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}

}

/**
 * main - contains all the code
 * Return: (0)
 */

int main(void)
{
	long int num = 1231952;
	int i = 2;
	long int result;

	while (i <= num / 2)
	{
		int prime = _isprime(i);
		int factor = _isfactor(i);

		if (prime == 1 && factor == 1)
		{
			result = i;
		}
		i++;
	}
	printf("%li\n", result);
}

int _isprime(int n);
int _isfactor(int n);
