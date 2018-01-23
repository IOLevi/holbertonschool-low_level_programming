#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * Returns: absolute value of input
 */
int _abs(int n) /*the function prototype might be borked */
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (n * -1);
	else
		return (n);
}
