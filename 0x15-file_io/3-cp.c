#include "main.h"
/**
 * _copy - copy contents of src to dest
 * @src: the source file
 * @dest: the destination file
 */
void _copy(char *src, char *dest)
{
	int fd, fd2, cclose;
	char *buff;
	ssize_t w, r;

	fd = open(src, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd2 = open(dest, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	buff = malloc(sizeof(char) * 1024);
	r = read(fd, buff, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	w = write(fd2, buff, 1024);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
		exit(99);
	}
	cclose = close(fd2);
	if (cclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	cclose = close(fd);
	if (cclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point for the program
 * @argc: argument count
 * @argv: argument vectors
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy(argv[1], argv[2]);
	return (0);
}
