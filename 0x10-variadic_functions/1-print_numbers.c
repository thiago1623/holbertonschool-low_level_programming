#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - program that prints its name.
 * @i: array of character pointers
 * @arg: array of character pointers
 * Return: arg.
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
