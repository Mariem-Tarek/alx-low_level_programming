#include <stdio.h>
#include "lists.h"
/**
* list_len - a new function
*
* @h : pointer  prametar
*
* Return: i
*/
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
