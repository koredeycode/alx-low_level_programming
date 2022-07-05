#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standared libraries.
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
