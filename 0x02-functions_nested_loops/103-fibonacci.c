#include <stdio.h>
/**
 * main - print all the english alphabet
 *
 * Description - print alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int sum;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			sum = sum + b;
		}
	c = b;
	b = b + a;
	a = c;
	}
	printf("%d\n", sum);
	return (0);
}
