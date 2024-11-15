#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Calculate the length of a character string
 * @s: test the char
 * Return: lenght of the character
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - copy contenu of variable to another
 * @dest: destination for copy
 * @src: source of pointer
 * Return: always 0
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
/**
 * new_dog - copy of the dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: return the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name = _strlen(name);
	int len_owner = _strlen(owner);
	dog_t *cpy_dog;

		cpy_dog = malloc(sizeof(dog_t));
		if (cpy_dog == NULL)
			return (NULL);

		cpy_dog->name = malloc(sizeof(char) * (len_name + 1));
		if (cpy_dog->name == NULL)
		{
			free(cpy_dog);
			return (NULL);
		}
		_strcpy(cpy_dog->name, name);

		cpy_dog->owner = malloc(sizeof(char) * (len_owner + 1));
		if (cpy_dog->owner == NULL)
		{
			free(cpy_dog->name);
			free(cpy_dog);
			return (NULL);
		}
		_strcpy(cpy_dog->owner, owner);

		cpy_dog->age = age;

		return (cpy_dog);
}
