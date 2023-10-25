#include <stdio.h>
#include "lists.h"
/**
* free_listint - a new function
*
* @head : int prametar
*
* Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
