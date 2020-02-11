#include "holberton.h"
/**
 * _islower - check for lowercase character
 *@c: print the value
 *Return: return 0 upom successful run.
 */
int _islower(int c)
{

	if (c <= 'z' && c >= 'a')
		{
			return (1);
		}
	return (0);
}
