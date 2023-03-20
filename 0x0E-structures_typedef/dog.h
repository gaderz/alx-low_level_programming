#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */

