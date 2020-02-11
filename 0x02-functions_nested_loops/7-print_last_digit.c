#include "holberton.h"
/**
 *print_last_digit - unction that computes the absolute value of an integer.
 *@n: this variable
 *Return: the content saved in variable n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	 n = n % 10;

	_putchar('0' + n);
	return (n);
}
