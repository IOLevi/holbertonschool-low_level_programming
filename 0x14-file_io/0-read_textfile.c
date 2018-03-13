#include "holberton.h"
/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */ 
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[BUF_SIZE];
	ssize_t ready;

	if (!filename)
	{
		return (0);
	}
		 

	fd = open(filename, 0);

	if (fd == -1)
	{
		return (0);				
	} 

	ready = read(fd, &buf, letters);

	if (ready < 1)
	{
		return (0);
	}	

	ready = write(1, &buf, letters);

	close(fd);

	return (ready);

	

}
