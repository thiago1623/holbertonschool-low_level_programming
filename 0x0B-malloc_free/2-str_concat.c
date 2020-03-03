#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - check the code for Holberton School students.
 * @s1: this is the first accountant.
 * @s2: this is the first accountant.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *arr;

	arr = malloc(sizeof(s1) + sizeof(s2));

	if (arr == NULL)
	{
		return (0);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		arr[i] = *(s1 + i);
	}

	for (j = 0; *(s2 + j) != '\0'; i++, j++)
	{
		arr[i] = *(s2 + j);
	}
	return (arr);
}
