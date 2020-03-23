#include "lists.h"
/**
 * print_listint - print a linkedlist
 * @h: the ehad of the linked list
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, i++;
	}
	return (i);
}
