#include <stdio.h>
#include "lists.h"
/**
* sum_listint - a new function
*
* @head : int prametar
*
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
