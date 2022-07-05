#include "main.h"
/**
 * _islower - Check if the parameter is lowercase or not.
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
