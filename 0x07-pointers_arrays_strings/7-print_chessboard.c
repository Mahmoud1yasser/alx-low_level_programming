#include "main.h"
/**
 * print_chessboard - print
 * Description: 'print chess board'
 * @a: chess bord dimensions
 */
void print_chessboard(char (*a)[8])
{
	int j;
	int temp = 0;
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			temp =a[i][j];
			_putchar(temp);
		}
	_putchar(10);
	}
}
