#include "3-calc.h"
/**
 * op_add - return the sum of two digits
 * @a: first digit
 * @b: second digit
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return the subtraction between two digits
 * @a: first digit
 * @b: second digit
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return the multiplication of two digits
 * @a: first digit
 * @b: second digit
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the division between two digits
 * @a: first digit
 * @b: second digit
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - return the remainder of division between two digits
 * @a: first digit
 * @b: second digit
 * Return: a + b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
