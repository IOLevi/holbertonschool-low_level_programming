#include "holberton.h"

int main(int argc, char *argv[])
{
	char buf[1024];
	int fdfrom, fdto, close1, close2;
	ssize_t writeeval;
	ssize_t readeval;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	fdto = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 066666664);
	if (fdto == -1)
		fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/*read 1024 bytes at a time */
	while ((readeval = read(fdfrom, &buf, 1024)) != 0)
	{
		writeeval = write(fdto, &buf, readeval);
		if (writeeval != readeval)
		{
			exit(99);
		}

	}

	close1 = (fdto);
	close2 = (fdfrom);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100);
	}
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100);
	}

	return (0);
}
