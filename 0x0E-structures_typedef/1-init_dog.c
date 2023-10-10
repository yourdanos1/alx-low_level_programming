#include "dog.h"
#include <stdio.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
snprintf(d->name, (int)sizeof(d->name), "%s", name);
d->age = age;
snprintf(d->owner, (int)sizeof(d->owner), "%s", owner);
}
