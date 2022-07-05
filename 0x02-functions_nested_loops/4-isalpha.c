#include "main.h"
/**
 * _isalpha - Check if the parameter is lowercase or not
 *
 * @c: parameter of the int type
 *
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
