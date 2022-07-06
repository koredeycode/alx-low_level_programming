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
	int count = 1;
	
	printf("%d, %d ", a, b);

	while (count <= 48)
	{
		int sum;
		sum = a + b;
		if (count != 48)
		{
			printf("%d, ", sum);
		}
		else
		{
			printf("%d\n", sum);
		}
	a = b;
	b = sum;
	count++;
	}
	return (0);
}
