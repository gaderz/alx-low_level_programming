#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to the dog's name
 * @age: the dog's age as a float
 * @owner: a pointer to the dog's owner's name
 *
 * Description: this struct contains information about a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(dog_t *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
