#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */
void free_list(list_t *head)
{
	list_t *save;

	save = head;

	while (save != NULL)
	{

		save = head;
		head = head->next;

		free(save->str);
		free(save);
	}
}
