#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *Descripiton: function that initialize a variable of typ struct dog
 *@d: pointer d
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));

if (!d)
{
return;
}

d ->name = name;
d ->age = age;
d ->owner = owner;
}

