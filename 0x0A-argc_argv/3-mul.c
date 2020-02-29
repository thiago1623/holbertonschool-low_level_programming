#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name.
 * @argc: array of character pointers
 * @argv: Contains the number of arguments that have been entered.
 * Return: 0.
 */
int main(int argc, char *argv[])
{

	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
