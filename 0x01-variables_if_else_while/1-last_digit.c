#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints out a random number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int lastline;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastline = n % 10;
	if (lastline > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastline);
		}
	else if (lastline == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, lastline);
		}
	else
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastline);
		}
	return (0);
}
