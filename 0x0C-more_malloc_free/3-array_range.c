#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * *array_range - program that prints its name.
 * @min: array of character pointers
 * @max: array of character pointers
 * Return: arr.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int length = max - min;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((length + 1) * sizeof(int));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for ( ; i <= length; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
