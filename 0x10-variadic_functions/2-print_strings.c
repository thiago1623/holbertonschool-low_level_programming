#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - program that prints its name.
 * @separator: array of character pointers
 * @n: array of character pointers
 * Return: arg.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *wd;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		wd = va_arg(arg, char *);
		(wd) ? printf("%s", wd) : printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s",  separator);
	}
	printf("\n");
	va_end(arg);
}
