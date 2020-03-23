#include "lists.h"
/**
 * add_nodeint - add new nodes to the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodo;

	newnodo = *head;
	newnodo = malloc(sizeof(listint_t));

	if (newnodo == NULL)
		return (NULL);
	newnodo->n = n;
	newnodo->next = *head;
	*head = newnodo;
	return (newnodo);
}
