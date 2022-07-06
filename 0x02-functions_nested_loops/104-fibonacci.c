#include <stdio.h>
/**
 * main - print first 98 fibonnaci numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	long int first = 1;
	long int second = 2;
	int count = 2;
	long int sum;

	printf("%lu, %lu,", first, second);

	while (count < 98)
	{
		sum = first + second;

		if (count != 96)
		{
			printf(" %lu,", sum);
		}
		else
		{
			printf(" %lu", sum);
		}
	first = second;
	second = sum;
	count++;
	}
	putchar('\n');
	return (0);
}
