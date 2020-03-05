kdsjcnaksn#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * *malloc_checked - program that prints its name.
 * @b: array of character pointers
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		free(p);

		exit(98);
	}
	return (p);
}
