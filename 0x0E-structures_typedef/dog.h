#ifndef DOG_H
#define DOG_H

/* 
 * Task: Define a new type struct dog with attributes name, age, & owner
 * Filename: dog.h (header file that defines a new type struct dog).
 */

/**
 * struct dog - A new type structure for a dog with various items.
 * @name: The dog's name.
 * @age: The dogs age.
 * @owner: The dog's owner details.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
