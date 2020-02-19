#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: this is the variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a;
	int i = 0;
	int f = 0;

	for (a = 0; *(s + a) != '\0' ; a++)
	{
	}
	a = a - 1;

	for (i = 0 ; i  <= a; i++)
	{
		f = s[i];
		s[i] = s[a];
		s[a] = f;
		a--;
	}
}
