#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that determine length of string
 * @str: string of interest
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;
	int str_len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}
	return (str_len);
}

/**
 * _strcpy - a function that copies strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2 to be copied to 1
 * Return: pointer to new string s1
 */
char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';

	return (s1);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner name
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);


	(*d).name = malloc(sizeof(char) * (name_len + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	(*d).owner = malloc(sizeof(char) * (owner_len + 1));
	if ((*d).owner == NULL)
	{
		free(d);
		free((*d).name);
		return (NULL);
	}
	_strcpy((*d).name, name);
	d->age = age;
	_strcpy((*d).owner, owner);

	return (d);
}

