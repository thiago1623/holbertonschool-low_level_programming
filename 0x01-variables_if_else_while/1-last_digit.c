#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main-prints out a random number
 * return: 0
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
		printf("the last digit of %i is %i and is greater than 5\n", n, lastline);
		}
	else if (lastline == 0)
		{
		printf("the last digit of %i is %i and is 0\n", n, lastline);
		}
	else
		{
		printf("last digit of %i is %i and is less that 6 and not 0\n", n, lastline);
		}
	return (0);
}
