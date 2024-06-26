#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: info to write in the file
 * Return: 1 in success, -1 in error.
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, w, c, i = 0;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	w = write(fd, text_content, i);
	c = close(fd);

	if ((w == -1) || (c == -1))
		return (-1);

	return (1);

}
