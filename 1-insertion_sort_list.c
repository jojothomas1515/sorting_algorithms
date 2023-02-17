#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *nn = *list, *cn;

	while (nn)
	{
		cn = nn;

		while (cn->prev && cn->n < cn->prev->n)
		{
			print_list(*list);
			cn = cn->prev;
		}
		nn = nn->next;
	}

}
