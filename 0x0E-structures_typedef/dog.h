#ifndef dog_h
#define dog_h
/**
 *struct dog - defines a new type struct dog
 *@name:name of dog
 *@age:age of dog
 *@owner: owner of dog
 *
 *Description: defines new type struct dog with name,age and owner variable
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*dog_h*/
