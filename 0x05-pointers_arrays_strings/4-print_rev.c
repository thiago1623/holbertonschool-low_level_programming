B#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: this is variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
