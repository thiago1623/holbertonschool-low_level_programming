#include "holberton.h"
/**
 * *leet - check the code for Holberton School students.
 * @a: this is the first accountant.
 * Return: Always 0.
 */
char *leet(char *a)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	j = 0;
	while (a[j] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (a[j] == arr[i])
			{
				a[j] = arr2[i];
			}
		}
		j++;
	}
	return (a);
}
