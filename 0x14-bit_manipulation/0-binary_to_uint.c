#include "holberton.h"
/**
 * _strlen - calculates the length of the string
 * @s: input
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int length;

	for (length = 0; *(s + length); length++)
		;
	return (length);
}
/**
 * binary_to_uint - converts a string of 1's and 0's to a decimal number
 * @b: string to convert
 * Return: unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, expo;

	if (!b)
		return (0);
	i = _strlen(b) - 1;
	for (result = 0, expo = 1; i >= 0; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result += expo;
	}
	return (result);
}
