#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Print the minimum coins to make change
 * @width: Size of input array
 * @height: Pointer to input array
 * Return: Always arr.
 */
int **alloc_grid(int width, int height)
{
	int col, row;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * width);

	for (col = 0; col < width; col++)
		grid[col] = malloc(sizeof(int) * height);

	for (row = 0; row < width; row++)
	{
		for (col = 0; col < height; col++)
			grid[row][col] = 0;
	}
	return (grid);
}
