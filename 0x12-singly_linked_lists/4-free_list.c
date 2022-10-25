#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free linked list
 * @head: linked list
 */

void free_list(list_t *head)
{
	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
