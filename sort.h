#ifndef SORT_H
#define SORT_H
/* BY JOJO THOMAS */

/* standard libraries declarations */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Prototype Declaration for mandated function*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/* Sorting function declarations */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

/*My Prototypes*/
void swap(int *a, int *b);
void swap_dlist(listint_t *a, listint_t *b);

#endif /* SORT_H */
