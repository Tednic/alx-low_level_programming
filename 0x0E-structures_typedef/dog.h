#ifndef DOG_H
#define DOG_H

/* 
 * Task: Define a new type struct dog with the following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 * Filename: dog.h. This is a header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type structure for a dog with various items.
 * @name: The dog's name.
 * @age: The dogs age.
 * @owner: The dog's owner details.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
