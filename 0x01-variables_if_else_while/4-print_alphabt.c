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

	while (a <= 122)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
