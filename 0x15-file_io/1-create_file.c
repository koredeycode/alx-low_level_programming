#include "main.h"
/**
 * create_file - create a file
 * @filename: the name of the file to be created
 * @text_content: the content of the file
 * Return: an integer
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	/*ssize_t k;*/

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	write(f, text_content, strlen(text_content));
	close(f);
	return (1);
}
