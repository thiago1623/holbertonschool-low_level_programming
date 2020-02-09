#include <stdio.h>
/**
 *main - programm that print the numbers
 *
 *Return: (0) Always
 */
int main(void)
{
	int m;

	m = 0;

	while (m < 10)
	{
		printf("%d", m);
		m++;
	}
	putchar('\n');
	return (0);
}
