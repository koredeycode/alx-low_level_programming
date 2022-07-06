#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a = 0;

	while (a <= 23)
	{
		int b = 0;

		while (b <= 59)
		{
		_putchar('0' + a / 10);
		_putchar('0' + a % 10);
		_putchar(':');
		_putchar('0' + b / 10);
		_putchar('0' + b % 10);
		_putchar('\n');
		b++;
		};
	a++;
	};
}
