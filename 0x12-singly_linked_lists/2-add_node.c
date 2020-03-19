#include "lists.h"
#include <string.h>
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodo;
	int i;

	newnodo = malloc(sizeof(list_t));
	if (newnodo == NULL)
		return (NULL);
	newnodo->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	newnodo->len = i;
	newnodo->next = *head;
	*head = newnodo;
	return (newnodo);
}
