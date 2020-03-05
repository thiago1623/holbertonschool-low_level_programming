#include <stdlib.h>
#include "holberton.h"
/**
 * *_calloc - program that prints its name.
 * @nmemb: array of character pointers
 * @size: array of character pointers
 * Return: p.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		p[i] = 0;
	return (p);
}
