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
* print_list - a new function
*
* @h : int prametar
*
* Return: i
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] (nil)\n", _strlen(h->str));
else
printf("[%d] %s\n", _strlen(h->str), h->str);

h = h->next;
i++;
}
return (i);
}
