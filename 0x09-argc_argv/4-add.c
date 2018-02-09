#include <stdio.h>
#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#endif
void dcc_mon_siginfo_handler(int UNUSED(whatsig));
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


int main(int argc, char *argv[])
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
		if (levAtoi(argv[i]) == -1) //this is kinda fucked
		{
		     printf("Error\n");
		     return (1);
		}

		sum += levAtoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);

}
