#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list_t
 * @head: head
 * len - length of string
 * @str: string length
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - length of string
 * @str: string of length
 * Return: length of string
 */
int len(const char *str)
{
        int i = 0;

        if (str == NULL)
                return (0);

        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}
