#include <stdio.h>
#include "lists.h"
/**
* _strlen - a new function
*
* @s : int prametar
*
* Return: i
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
* print_listint - a new function
*
* @h : int prametar
*
* Return: i
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	i++;
}
return (i);
}
