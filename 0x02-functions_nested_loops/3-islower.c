#include "main.h"
/**
 * _islower - Check if the parameter is lowercase or not
 *
 * @c: the parameter as integer
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
