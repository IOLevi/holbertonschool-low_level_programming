#include "holberton.h"

/**
 * error - does error handling for cp clone
 * @num: exit number
 * @s: argv string
 * @fd: file descriptor number
 */
void error(int num, char *s, int fd)
{
	switch (num)
	{
		case (97):
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case (98):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(98);
			break;
		case (99):

			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(99);
			break;
		case (100):
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
			break;
		default:
			return;
	}


}

/**
 * main - implements cp functionary
 * @argc: number of arguments
 * @argv: vector to strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int fdfrom, fdto, close1, close2;
	int writeeval;
	int readeval;

	if (argc != 3)
		error(97, "", 0);
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
		error(98, argv[1], 0);
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (fdto == -1)
		fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fdto == -1)
		error(99, argv[2], 0);
	while ((readeval = read(fdfrom, &buf, 1024)) != 0)
	{
		if (readeval == -1)
			error(98, argv[1], 0);

		writeeval = write(fdto, &buf, readeval);
		if (writeeval == -1)
			error(99, argv[2], 0);
	}
	if (readeval == -1)
		error(98, argv[1], 0);
	close1 = close(fdto);
	close2 = close(fdfrom);
	if (close1 == -1)
		error(100, "", fdto);
	if (close2 == -1)
		error(100, "", fdfrom);
	return (0);
}
