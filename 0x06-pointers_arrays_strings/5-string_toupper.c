#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 * @i: this is the first accountant.
 * Return: Always 0.
 */
char *string_toupper(char *i)
{
	int count;
	int aux;

	for (count = 0; i[count] != '\0'; count++)
	{
		if (i[count] > 96 && i[count] < 123)
		{
			aux = i[count];
			aux = aux - 32;
			i[count] = aux;
		}
	}
	return (i);
}
