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
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
