#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings followed by a line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char *str;
	int n;
	char c;
	float f;

	va_start(params, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c  = va_arg(params, int);
				printf("%c, ", c);
				break;
			case 'i':
				n = va_arg(params, int); 
				printf("%i, ", n);
				break;
			case 'f':
				f = va_arg(params, double);
				printf("%f, ", f);
				break;
			case 's':
				str = va_arg(params, char *);
				if (str == NULL)
					printf("(nil)");
				if (str)
					printf("%s, ", str);
				break;
		}
		i++;
	}
	va_end(params);
	printf("\n");
}
