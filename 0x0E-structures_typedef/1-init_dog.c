#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
d->name = malloc(strlen(name) + 1);
d->owner = malloc(strlen(owner) + 1);
if (d->name == NULL || d->owner == NULL)
{
fprintf(stderr, "Memory allocation error\n");
exit(1);
}
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
}
