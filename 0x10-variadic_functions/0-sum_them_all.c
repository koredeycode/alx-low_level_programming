#include <stdarg.h>
/**
 * sum_them_all - return the sum of its parameters
 * @n: count of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list params;
	unsigned int i;

	va_start(params, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(params, int);
	}
	va_end(params);
	return (sum);
}
