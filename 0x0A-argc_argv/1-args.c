#include <stdio.h>
/**
 * main - print the number of arguments passed into a program
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */

int main(int argc, __attribute((unused)) char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}
