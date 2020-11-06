#include "list.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *new_list = *head, *aux = NULL;
    int count_list = 0;

    if (new_list)
    {
      while (count_list < index) {
        if (count_list == index)
        {
          if (new_list == *head)
          {
            *head = new_list->next;
            if (new_list->next)
            {
              new_list->next->prev = NULL;
            }
          }
          else if (new_list->next == NULL)
          {
            aux = new_list->prev;
            new_list->prev = NULL;
            new_list->next = NULL;
          }
        }

        count_list++;
      }
    }
}
