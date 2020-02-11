#include "holberton.h"
/**
 *print_last_digit - unction that computes the absolute value of an integer.
 *@n: this variable
 *Return:  0  Always
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = n * -1;
	}

	 n = n % 10;

	_putchar(n + '0');
	return (n);

}
