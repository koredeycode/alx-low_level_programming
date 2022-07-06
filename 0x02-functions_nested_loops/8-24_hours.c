#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a < 3)
	{
		_putchar('0' + a);

		while (b < 4)
		{
		_putchar('0' + a);
		b++;
		};
	a++;
	}
}
