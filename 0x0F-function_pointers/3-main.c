#include "3-calc.h"

/**
 * main - the main programme
 * @argc: argument count
 * @argv: arguments vector
 * Return: always zero
 */
int main(int argc, char **argv)
{
	int first;
	int second;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
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
	first = atoi(argv[1]);
	second = atoi(argv[3]);
	printf("%d\n", ptr(first, second));
	return (0);
}
