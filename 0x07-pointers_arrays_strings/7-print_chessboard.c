#include "main.h"

/**
 * print_chessboard - prints a chessboard using
 * the given 2D array of characters
 *
 * @a: the 2D array of characters representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
	for (col = 0; col < 8; col++)
	{
		_putchar(a[row][col]);
	}
		_putchar('\n');
	}
}

