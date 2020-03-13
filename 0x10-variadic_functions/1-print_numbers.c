#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - program that prints its name.
 * @separator: array of character pointers
 * @n: array of character pointers
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1 && separator != NULL)
			printf("%s",  separator);
	}
	printf("\n");
	va_end(arg);
}
