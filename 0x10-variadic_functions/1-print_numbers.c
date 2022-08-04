#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by a line
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(params);
	printf("\n");
}
