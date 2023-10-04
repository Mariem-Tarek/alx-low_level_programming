#include <stdlib.h>
#include "main.h"
/**
* str_concat - a new function
*
* @s1 : string prametar
* @s2 : string prametar
*
* Return: NULL or arr
*/
char *str_concat(char *s1, char *s2)
{
unsigned int size1 = 0, size2 = 0, i;
char *arr;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
arr = (char *)malloc((size1 + size2 + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size1; i++)
{
arr[i] = s1[i];
}
for (i = 0; i < size2; i++)
{
arr[size1 + i] = s2[i];
}
arr[size1 + size2] = '\0';

return (arr);
}
