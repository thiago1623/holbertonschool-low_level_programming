#include <stdio.h>
/**
 *main - this is the program the lowercase alphabeth
 *
 *Return: (0) Always
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
