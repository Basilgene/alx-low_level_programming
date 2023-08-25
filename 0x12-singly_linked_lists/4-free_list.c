#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: head of list to be free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
