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
	printf("%s\n", argv[0]);

	return (0);

}
