#include "sort.h"

/**
 * insertion_sort_list - insertion sort function
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = *list;

	if (list != NULL && *list != NULL && (*list)->next != NULL)
	{
		while (node)
		{
			*list = swap_dlist(node, *list);
			node = node->next;
		}
	}
}

/**
 * swap_dlist - go through the items in descending order
 * @node: index node
 * @l_item: list item
 * Return: list;
 */
listint_t *swap_dlist(listint_t *node, listint_t *l_item)
{
	listint_t *temp, *cn = node;
	int tracked = 0;
	
	while (cn)
	{
		if (!cn->prev)
		{
			l_item = cn;
			break;
		}
		if (cn->prev->n > cn->n)
		{
			temp = cn->prev;
			cn->prev = temp->prev;
			if (cn->prev)
				cn->prev->next = cn;
			temp->next = cn->next;
			if (temp->next)
				temp->next->prev = temp;
			cn->next = temp;
			temp->prev = cn;

			if (tracked == 0 && node->n > temp->n)
			{
				node = cn;
				tracked = 1;
			}
			if (l_item->prev)
			{
				l_item = l_item->prev;
			}
			print_list(l_item);
		} else
			break;
	}
	return (l_item);
}
