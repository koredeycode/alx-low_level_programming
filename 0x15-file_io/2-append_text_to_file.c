#include "main.h"
/**
 * append_text_to_file - append text to a file
 * @filename: the name of the file to be appended
 * @text_content: the content to be appended to the file
 * Return: an integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int k;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND, 00600);
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
