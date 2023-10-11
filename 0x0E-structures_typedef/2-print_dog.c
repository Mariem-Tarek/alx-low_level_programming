#include <stdio.h>
#include "dog.h"
/**
* print_dog - a new function
*
* @d : int prametar
*
* Return: Nothing
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
else
{
printf("NULL");
}
return;
}
