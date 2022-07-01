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

	a = 0;

	while (a < 1000)
	{
		b = a % 100;
		c = a / 100;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');
			if (a < 890)
			{
				putchar(',');
				putchar(' ');
			};
		}
		a++;
	};
	putchar('\n');
	return (0);
}
