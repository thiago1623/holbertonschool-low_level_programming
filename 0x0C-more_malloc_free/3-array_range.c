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
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for ( ; i <= max - min; i++)
		arr[i] = i;

	return (arr);
}
