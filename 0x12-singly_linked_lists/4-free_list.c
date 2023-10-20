#include <stdio.h>
#include "lists.h"
/**
* free_list - a new function
*
* @head : int prametar
*
* Return: Nothing
*/
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current->str);
	free(current);
}
}
