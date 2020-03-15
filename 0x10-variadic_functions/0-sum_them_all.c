#include "variadic_functions.h"
/**
 * sum_them_all - program that prints its name.
 * @n: array of character pointers
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = sum = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
