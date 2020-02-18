#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: this is variable
 * @b: the second variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
