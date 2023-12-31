#ifndef DOG_H
#define DOG_H

/*
 * Task: Define a new type struct dog with name, age, and owner as elements
 * Filename: dog.h (a header file for the task)
 */

/**
 * struct dog - A new type structure for a dog with various attributes.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner of the dog.
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
