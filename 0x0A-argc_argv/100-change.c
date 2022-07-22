#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers and print result
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num;
	int j = 0;
	int count = 0;
	int denomination[] = {25, 10, 5, 2, 1};
	
	/*argc = argc;*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			while (j < 5 && num != 0)
			{
				while (num >= denomination[j])
				{
					num -= denomination[j];
					count++;
				}
				j++;
			}
			printf("%d\n", count);
		}
	}
	return (0);
}
