#include "holberton.h"
/**
 * *_strncpy - check the code for Holberton School students.
 * @dest: this is the first accountant.
 * @src: this is the second accountant.
 * @n: this is the third  accountant.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int c;

	for (c = 0; *(dest + c) != '\0'; c++)
	{
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
