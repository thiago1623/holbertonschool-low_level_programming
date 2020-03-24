#include "lists.h"

/**
 * free_listint_safe - free a `listint_t` list and set the head to null
 * @h: double pointer to head of linked list
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *fr = NULL;
	size_t size_list = 0;

	while (current)
	{
		fr = current;
		current = current->next, size_list++;
		free(fr);
		if (fr <= current)
			break;
	}
	*h = NULL;
	return (size_list);
}
