#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *nn = *list, *cn;

	while (nn)
	{
		cn = nn;

		while (cn->prev && cn->n < cn->prev->n)
		{
			swap(&cn->n, &cn->prev->n);
			print_list(*list);
			cn = cn->prev;
		}
		nn = nn->next;
	}

}

/**
 * swap - swap two integers
 * @a: first int
 * @b: second int
 */
void swap_dlist(listint_t *a, listint_t *b)
{
	listint_t *temp = b;
	b->next = a->next;
	a->prev = b->prev;
	*b = temp;
}
