#include "main.h"
/**
 * print_alphabet - print all the english alphabet
 *
 * Description - print alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
		char first = 'a';

		while (first <= 'z')
		{
			_putchar(first);
			first++;
		};
		_putchar('\n');
}
