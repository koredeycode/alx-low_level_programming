#include <stdio.h>
#include <stdlib.h>
int isnum(char *str)
{
	int i;
	int ret = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			ret *= 1;
		}
		else
		{
			ret *= 0;
		}
	}
	return (ret);
}
/**
 * main - add positive numbers and print result 
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isnum(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
				break;
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (sum);
}
