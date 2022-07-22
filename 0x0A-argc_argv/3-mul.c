#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments passed into a program
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc > 2)
	{

		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (0);
}
