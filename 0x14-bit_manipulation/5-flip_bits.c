#include "holberton.h"
/**
 * flip_bits - calculates the number of bits needed
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result = 0;

	i = sizeof(n) * 8 - 1;
	while (i >= 0)
	{
		i--;
		if (((n ^ m) >> i) & 1)
			result++;
	}
	return (result);
}
