#include <stdio.h>
/**
 *  * main - main block
 *   * Description: Print all possible combinations of two digits.
 *           * Return: 0
 *
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;

	while (a < 1000)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;

		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');
			if (a < 700)
			{
				putchar(',');
				putchar(' ');
			};
		};
		a++;
	};
	putchar('\n');
	return (0);
}
