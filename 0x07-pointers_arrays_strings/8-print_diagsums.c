#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print a chessboard
 * @a: a character parameter
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;
	int d, d2;

	for (i = 0; i < size; i++)
	{
		d = a[(i * size) + i];
		sum += d;
		d2 = a[(size - 1) + ((size - 1) * i)];
		sum2 += d2;
	}
	printf("%d, %d\n", sum, sum2);
}
