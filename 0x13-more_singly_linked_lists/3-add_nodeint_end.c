#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: the head of the linked list
 * @n: the value of the new node
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodo, *endnodo = *head;

	newnodo = malloc(sizeof(listint_t));
	if (!newnodo)
		return (NULL);
	newnodo->n = n;
	newnodo->next = NULL;

	if (!*head)
		*head = newnodo;
	else
	{
		while (endnodo->next != NULL)
			endnodo = endnodo->next;
		endnodo->next = newnodo;
	}
	return (newnodo);


}
