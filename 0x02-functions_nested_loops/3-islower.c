#include "holberton.h"
/**
 *_islower(c) - check for lowercase character
 *
 *Return: Always 0 && 1
 */
int _islower(int c)
{

	int d;

	for (d = 97; d <= 122; d++)
		{
			if (c >= d)
				{
					return (1);
				}
		}
	return (0);
}
