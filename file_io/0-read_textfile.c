#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it.
 * @filename: the name of the file
 * @letters: # of letters of the file
 * Return: # printed read - letters, 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w, c;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, str, letters);
	w = write(STDOUT_FILENO, str, r);
	c = close(fd);
	if ((fd == -1) || (r == -1) || (w == -1) || (c == -1))
	{
		free(str);
		return (0);
	}
	free(str);
	return (w);
}
