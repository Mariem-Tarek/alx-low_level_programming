#include "main.h"

/**
* cap_string - a new function
*
* @n : int prametar
*
* Return: original
*/
char *cap_string(char *n)
{
int index = 0;
while (n[index])
{
while (!(n[index] >= 'a' && n[index] <= 'z'))
index++;
if (n[index - 1] == ' ' ||
n[index - 1] == '\t' ||
n[index - 1] == '\n' ||
n[index - 1] == ',' ||
n[index - 1] == ';' ||
n[index - 1] == '.' ||
n[index - 1] == '!' ||
n[index - 1] == '?' ||
n[index - 1] == '"' ||
n[index - 1] == '(' ||
n[index - 1] == ')' ||
n[index - 1] == '{' ||
n[index - 1] == '}' ||
index == 0)
n[index] -= 32;
index++;
}
return (n);
}
