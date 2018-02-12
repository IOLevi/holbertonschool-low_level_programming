#include <stdio.h>
#include <stdlib.h>

/**
 * levAtoi - does atoi but returns -1 if has a letter
 * @str: string to check
 *
 * Return: -1 if failure; otherwise the integer value
 */
int levAtoi(char *str)
{
	int i;
	int res = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		else
			return (-1);
	}
	return (res);
}

/**
 * main - adds command line arguments
 * @argc: number of arguments
 * @argv: double pointer
 *
 * Return: the sum
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (levAtoi(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}

		sum += levAtoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);

}
