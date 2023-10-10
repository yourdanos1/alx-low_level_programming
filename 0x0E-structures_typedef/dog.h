#ifndef MAIN
#define MAIN

/**
 * struct dog - has three elemnts
 * @name: holding character
 * @owner: holding character
 * @age: holding float
 *
 * struct of type dog has three elements
 */

struct dog
{
char *name;
char *owner;
float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
