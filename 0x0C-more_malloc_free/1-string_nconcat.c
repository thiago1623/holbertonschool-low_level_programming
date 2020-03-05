#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * *string_nconcat - program that prints its name.
 * @s1: array of character pointers
 * @s2: array of character pointers
 * @n: array of character pointers
 * Return: 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, count = 0;
	char *arr, *org;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for ( ; *s1; s1++)
		count++;
	s1 -= count;
	for (i = 0; i < n && *s2; i++, s2++)
		count++;
	s2 -= i;
	arr = malloc(sizeof(char) * count + 1);
	org = arr;

	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for ( ; *s1; s1++, arr++)
	{
		*arr = *s1;
	}
	for (i = 0; i < n && *s2; s2++, arr++, i++)
	{
		*arr = *s2;
	}
	*arr = '\000';
	arr = org;
	return (arr);
}
