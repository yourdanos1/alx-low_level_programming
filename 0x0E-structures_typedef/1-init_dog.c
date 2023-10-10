#include <stdio.h>
#include "dog.h"

/**
 * init_dog - struct
 * @*d: first member
 * @*name: second member
 * @age: third member
 * @*owner: fourth member
 *
 * description: struct that initalize varible of type struct_dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{   
if (name != NULL)
{
int i;
for (i = 0; name[i] != '\0' && i < (int)sizeof(d->name) - 1; i++)
{
d->name[i] = name[i];
}
d->name[i] = '\0'; 
}
else
{
printf("Name: NULL\n");
}
if (owner != NULL)
{
int i;
for (i = 0; owner[i] != '\0' && i < (int)sizeof(d->owner) - 1; i++)
{
d->owner[i] = owner[i];
}
d->owner[i] = '\0';
}
else
{
printf("Owner: NULL\n");
}
d->age = age;
}
