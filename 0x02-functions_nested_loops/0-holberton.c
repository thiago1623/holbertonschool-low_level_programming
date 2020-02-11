#include "holberton.h"
/**
 * main - prints the string "Holberton" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "Holberton";
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(c[a]);
	}
	_putchar('\n');
	return (0);
}
