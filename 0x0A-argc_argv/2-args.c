#include <stdio.h>
/**
 * main - print the number of arguments passed into a program
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
