/*
 * Task: Write a function that creates a new dog.
 * Filename: 4-new_dog.c
 * Prototype: dog_t *new_dog(char *name, float age, char *owner)
 * _strcpy and _strlen are used alongside.
 */

#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *src);
int _strlen(char *s);

/**
 * new_dog - this function creates a new dog
 * @name: a name string for the dog
 * @age: the age of the dog of float type
 * @owner: a string that represents the owner of the dog
 * Return: A pointer to struct dog_t. NULL if functiin fails.
 */

dog_t *new_dog(char *name, float age, char *owner) 
{
	dog_t *puppy;
	char *puppy_name;
	char *puppy_owner;

	puppy = (dog_t *) malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	puppy_owner = _strcpy(owner);

	if (puppy_owner == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy_name = _strcpy(name);

	if (puppy_name == NULL)
	{
		free(puppy_owner);
		free(puppy);
		return (NULL);
	}

	puppy->name = puppy_name; 
	puppy->age = age;
	puppy->owner = puppy_owner;
	return (puppy);
}

/**
 * _strlen - length of a string
 * @s: a string
 * Return: the lenght of string of int type
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length]; length++)
	{}
	return (length);
}

/**
 * _strcpy - creates the copy of a string @src
 * @src: the string to be copied
 * Return: the copy of string @src
 */

char *_strcpy(char *src)
{
	int i;
	int length;
	char *destination;

	length = _strlen(src);
	destination = malloc(sizeof(char) * length + 1);

	if (destination == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		destination[i] = src[i];

	destination[i] = '\0';
	return (destination);
}
