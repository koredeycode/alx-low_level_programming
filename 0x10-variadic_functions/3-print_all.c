#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - prints  parameters based on specifiers
 * @format: contain the format specifiers
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char c, *str, *specs = "cifs";
	int n, j, d = 0;
	float f;

	va_start(params, format);
	while (format && format[i])
	{ j = 0;
		while (specs[j])
		{
			if (format[i] == specs[j] && d)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				c  = va_arg(params, int), printf("%c", c), d = 1;
				break;
			case 'i':
				n = va_arg(params, int), printf("%i", n), d = 1;
				break;
			case 'f':
				f = va_arg(params, double), printf("%f", f), d = 1;
				break;
			case 's':
				str = va_arg(params, char *), d = 1;
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
					printf("%s", str);
				break;
		} i++;
	}
	va_end(params),	printf("\n");
}
