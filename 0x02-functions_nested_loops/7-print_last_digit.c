#include "holberton.h"
/**
 *print_last_digit - unction that computes the absolute value of an integer.
 *@n: this variable
 *Return:  (r % 10)  Always
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
	{
		n = n * -1;
	}
	_putchar((b = n % 10) + '0');
	return (b);

}