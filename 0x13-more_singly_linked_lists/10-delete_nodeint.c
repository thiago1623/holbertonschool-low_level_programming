#include "lists.h"
/**
 * delete_nodeint_at_index - inserts a ew node in a specified index
 * @head: the head of the linked list
 * @index: the index to insert the new node
 * Return: the address of the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, temp = NULL;
	unsigned int i = 0;

	if (index == 0)
	{
		temp = current;
		*head = current->next;
		free(temp);
	}
	while (current)
	{
		if (i == index - 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next, i++;
	}
	return (-1);
}
