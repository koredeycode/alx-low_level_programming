#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - contains the if statement
 *
 * Return:always return 0
 *
*/
int main(void)
{
	int a = 97;
	int b = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	};

	while (b <= 90)
	{
		putchar(b);
		b++;
	};

	putchar('\n');
	return (0);
}
