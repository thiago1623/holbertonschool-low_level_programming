#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the head of the linked list to free
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
}
