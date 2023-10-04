#include <stdlib.h>
#include "main.h"
/**
* _strdup - a new function
*
* @str : string prametar
*
* Return: NULL or arr
*/
char *_strdup(char *str)
{

unsigned int size = 0, i = 0;
char *arr;

if (str == NULL)
{
return (NULL);
}
while (str[size] != '\0')
{
size++;
}
arr = (char *)malloc((size + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (; i <= size; i++)
arr[i] = str[i];

return (arr);
}
