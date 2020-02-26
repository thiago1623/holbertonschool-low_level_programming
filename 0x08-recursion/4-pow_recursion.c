#include "holberton.h"
/**
 * _pow_recursion - prints buffer in hexa
 * @x: the address of memory to print
 * @y: the address of memory to print
 * Return: s.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
