#include "lists.h"
/**
 * dlistint_len - Print all elements of a dlistint_t list
 * @h: pointer to head of listint_t list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h  = h->next;
		elements++;
	}
	return (elements);
}
