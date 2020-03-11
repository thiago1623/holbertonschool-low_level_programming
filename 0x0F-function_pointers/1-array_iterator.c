#include "function_pointers.h"
/**
 * array_iterator - program that prints its name.
 * @array: array of character pointers
 * @size: array of character pointers
 * @action: array of character pointers
 * Return: void.
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	if (action && size && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}

}
