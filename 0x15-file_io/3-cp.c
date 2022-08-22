#include "main.h"
/**
 * _copy - copy contents of src to dest
 * @src: the source file
 * @dest: the destination file
 */
void _copy(char *src, char *dest)
{
	int fd, fd2, cclose;
	char buff[1024];
	ssize_t w, c = 1024;

	fd = open(src, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 00664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	while (c == 1024)
	{
		c = read(fd, buff, 1024);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		w = write(fd2, buff, c);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	cclose = close(fd2);
	if (cclose == -1)
		closerFunc(fd2);
	cclose = close(fd);
	if (cclose == -1)
		closerFunc(fd);
}
/**
 * closerFunc - helper function for closing fds
 * @n: file descriptor integer
 */
void closerFunc(int n)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
	exit(100);
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
