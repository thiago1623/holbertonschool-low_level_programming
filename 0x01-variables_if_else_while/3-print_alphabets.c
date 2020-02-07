#include <stdio.h>
/**
 *main - print the alphabeth
 *
 *Return: Always 0
 */
int main(void)
{
	char alp;
	char ALPH;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
		putchar(ALPH);
	putchar('\n');
	return (0);
}
