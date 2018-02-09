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
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d", atoi(argv[1]) * atoi(argv[2]));

	return (0);



}
