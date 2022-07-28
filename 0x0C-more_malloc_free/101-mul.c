#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main(int argc, char **argv)
{
	long int a = atol(argv[1]);
	long int b = atol(argv[2]);

	if (argc == 3)
	{
		/*if (isdigit(a) == 0 && isdigit(b) == 0)
		{
			printf("Error\n");
			exit(98);
		}*/
		printf("%ld\n", a * b);
	}
	else
	{
		printf("Error\n");
		/*exit (98);*/
	}
}
