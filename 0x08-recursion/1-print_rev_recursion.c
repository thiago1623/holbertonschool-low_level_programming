#include "holberton.h"
/**
 * _print_rev_recursion - prints buffer in hexa
 * @s: the address of memory to print
 * Return: s.
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
