#include "3-calc.h"

/**
 * main - the main programme
 * @argc: argument count
 * @argv: arguments vector
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int first = atoi(argv[1]);
	int second = atoi(argv[3]);
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][2])
	{
		printf("Error\n");
		exit(99);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(first, second));
	return (0);
}
