#include "holberton.h"
/**
 * print_chessboard - Print a chessboard
 * @a: Matriz
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int c, f, g;

	g = sizeof(a);

	for (c = 0; c < g; c++)
	{
		for (f = 0; f < g; f++)
		{
			_putchar(a[c][f]);
		}
		_putchar('\n');
	}
}
