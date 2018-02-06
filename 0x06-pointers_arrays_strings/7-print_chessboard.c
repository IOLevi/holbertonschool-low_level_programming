#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: 2d array chessboard positions
 */
void print_chessboard(char (*a)[8])
{

	int i, j;
	//pointer to an array of 8 chars
	//*a is equal to the address of the first row of 8 chars
	// *(*a + 0) value of the first item in that row... and so on

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			//_putchar(a[i][j]);
                        _putchar(*(*(a + i) + j));
		}
		_putchar('\n');
	}


}
