#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof((long)i));
	printf("Size of a long long int: %ld byte(s)\n", sizeof((long long)i));
	printf("Size of a float: %ld byte(s)", sizeof(f));
	return (0);
}
