#include "holberton.h"

/**
 * append_text_to_file - test
 * @filename: name of file
 * @text_content: null terminated string to write
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t test;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	
	/* If file already existed or failed to create */
	if (fd == -1)
	{	
		return (-1);
	}
	
	if (text_content)
	{
		while (text_content[i] != 0)
			i++;
		
		test = write(fd, text_content, i);

		if (test < 1)
			return (-1);

	}

	close(fd);
	return (1);

}
