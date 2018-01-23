#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int c, r, p, n;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			p = r * c;
			if (p < 10)
			{
				_putchar(p + '0');
			}
			else
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		     	if (c == 9)
		       	{
				_putchar('\n');
			}
		       	else
	       		{
       				_putchar(',');
				if ((p < 5) && (r > 4))
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
       			}
       		}

       	}




}
