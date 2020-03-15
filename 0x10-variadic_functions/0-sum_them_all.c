#include "variadic_functions.h"
/**
 * sum_them_all - check the code for Holberton School students.
 *@n: the variable
 *Return: dest
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, unsigned int);
	va_end(arg);
	return (sum);
}
