#include "main.h"
/**
 * _islower - Check if the parameter is lowercase or not.
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 122) || (c >= 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
