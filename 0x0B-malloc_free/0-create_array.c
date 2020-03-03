#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Print the minimum coins to make change
 * @size: Size of input array
 * @c: Pointer to input array
 * Return: Always arr.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count = 0;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (; count < size; count++)
	{
		*(arr + count) = c;
	}
	return (arr);
}
