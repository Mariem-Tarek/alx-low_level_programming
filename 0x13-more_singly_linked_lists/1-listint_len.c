#include<stdio.h>
#include "lists.h"
/**
* listint_len - a new function
*
* @h : int prametar
*
* Return: i
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h != NULL)
		i++;
		h = h->next;
	}
return (i);
}
