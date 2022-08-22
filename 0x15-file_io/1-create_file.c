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
	int k;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (f == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	k = write(f, text_content, strlen(text_content));
	if (k == -1)
		return (-1);
	close(f);
	return (1);
}
