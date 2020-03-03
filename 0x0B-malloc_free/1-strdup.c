#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - check the code for Holberton School students.
 * @str: this is the first accountant.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	arr = malloc(sizeof(char) * i);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		arr[j] = str[j];
	}
	return (arr);
}
