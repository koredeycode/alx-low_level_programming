#include <stdio.h>
/**
 *  * main - main block
 *   * Description: Print all possible combinations of two digits.
 *           * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;
	int a;
	int b;
	int c;
	int d;

	i = 0;

	while (i < 100)
	{
		a = i / 10;
		b = i % 10;

		j = 0;
		while (j < 100)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				};
			};
			j++;
		};
		i++;
	};
	putchar('\n');
	return (0);
}
