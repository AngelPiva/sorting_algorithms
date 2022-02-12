#include "sort.h"

/**
 * insertion_sort_list - sorts a dllist of int using the Insertion sort algori.
 * @list: listint_t list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *aux = NULL;

	tmp = *list;
	while (tmp->next)
	{
		if (tmp->n > tmp->next->n)
		{
			aux = tmp->next->next;
			tmp->next->prev = tmp->prev;
			if (!tmp->next->prev)
				*list = tmp->next;
			else
				tmp->prev->next = tmp->next;
			tmp->next->next = tmp;
			tmp->prev = tmp->next;
			if (aux)
				aux->prev = tmp;
			tmp->next = aux;

			print_list(*list);
			tmp = tmp->prev;

			if (tmp->prev && tmp->prev->n > tmp->n)
			{
				tmp = tmp->prev;
				continue;
			}
		}
		tmp = tmp->next;
	}
}
