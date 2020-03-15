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

	i = sum = 0;
	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}
