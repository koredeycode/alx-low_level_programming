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
	long int a = 1;
	long int b = 2;
	int count = 1;

	printf("%lu, %lu, ", a, b);

	while (count <= 48)
	{
		long int sum;

		sum = a + b;
		if (count != 48)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu\n", sum);
		}
	a = b;
	b = sum;
	count++;
	}
	return (0);
}
