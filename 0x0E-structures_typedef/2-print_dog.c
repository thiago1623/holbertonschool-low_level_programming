#include <stdio.h>
#include "dog.h"
/**
 * print_dog - program that prints its name.
 * @d: array of character pointers
 * Return: 0.
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{

		printf("Name: ");
		(*d).name == NULL ? printf("(nil)\n") : printf("%s\n", (*d).name);
		printf("age: %f\n", (*d).age);
		printf("Owner: ");
		(*d).owner == NULL ? printf("(nil)\n") : printf("%s\n", (*d).owner);
	}

}
