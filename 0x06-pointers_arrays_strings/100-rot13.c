#include <stdio.h>
/**
 * rot13 - encode a string using rot 13
 * @str: the inputted string
 * Return: the encoded string
 */

char *rot13(char *str)
{
	int i;
	int count;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (count = 0; str[count] != '\0'; count++)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[count] == alpha[i])
			{
				str[count] = rot[i];
				break;
			}
		}
	}
	return (str);
}
