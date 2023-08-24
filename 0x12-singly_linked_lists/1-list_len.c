#include "lists.h"
/**
 * list_len - this function returns the number of elements
 * @h: head
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
	h = h->next;
	}
	return (i);
}
