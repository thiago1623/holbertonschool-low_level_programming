#include <stdio.h>
/**
 * main - program that prints its name.
 * @argc: array of character pointers
 * @argv: Contains the number of arguments that have been entered.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
