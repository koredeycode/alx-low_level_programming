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
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		a = n % 3;
		b = n % 5;

		if (a == 0 || b == 0)
		{
			sum = sum + n;
		}
	n++;
	}
	printf("%d\n", sum);
}
