#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src
 * @dest: The buffer storing the string copy
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);

	mydog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = malloc(sizeof(cahr) * (_strlen(owner) + 1));
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}

	mydog->name = _strcopy(mydog->name, name);
	mydog->age = age;
	mydog->owner = _strcopy(mydog->owner, owner);

	return (mydog);
}
