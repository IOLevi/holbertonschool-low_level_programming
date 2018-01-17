#include <unistd.h>

/**
 * main - prints a short statement to standard error
 *
 * Return: 1
 */
int main()
{
	execl("/bin/echo", "and that piece of art is useful\" - Dora Korpar, 2015-10-19", ">&2", NULL);
	return (1);
}
