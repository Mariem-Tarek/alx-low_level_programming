#include <stdio.h>
#include "lists.h"
/**
* get_nodeint_at_index - a new function
*
* @head : int prametar
* @index : char prametar
*
* Return: node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
