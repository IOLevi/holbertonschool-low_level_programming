#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: null terminated sctring to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	/* create file with rw------- -- if file already exists do not change permissions */

	/* if file already exists truncate it */
	int fd, i;
	ssize_t test;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	
	/* If file already existed or failed to create */
	if (fd == -1)
	{	
		fd = open (filename, O_WRONLY | O_CREAT | O_TRUNC);
		if (fd == -1)
			return (-1);
	}
	
	if (text_content)
	{
		while (text_content[i] != 0)
			i++;
		
		test = write(fd, text_content, i); 

	}

	close(fd);
	return (1); 
}
