#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - program that prints its name.
 * @name: array of character pointers
 * @age: array of character pointers
 * @owner: array of character pointers
 * Return: dog_n.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;
	int i, j, cp;
	char *new_name, *new_owner;

	dog_n = malloc(sizeof(dog_n));

	if (!dog_n)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_name = malloc(sizeof(char) * i + 1);

	if (!new_name)
	{
		free(dog_n);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * j + 1);

	if (!new_owner)
	{
		free(new_name);
		free(dog_n);
		return (NULL);
	}
	for (cp = 0; cp <= i; cp++)
		new_name[cp] = name[cp];
	for (cp = 0; cp <= j; cp++)
		new_owner[cp] = owner[cp];

	dog_n->name = new_name;
	dog_n->age = age;
	dog_n->owner = new_owner;

	return (dog_n);

}
