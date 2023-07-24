#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);


/**
 * _strlen - returns the length of string.
 * @s: strings to evaluate.
 * return: the length of the string.
 */

int _strlen(char *s)
{
int len = 0;

while (*s++)
{
len++;
}

return (len);

}


/**
 * _strcpy - copies the string to the pointer by src
 *         including the termination null byte (\0)
 *         to the buffer point by dest.
 * @dest: the buffer storing string copy.
 * @src: the source string.
 * return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];

dest[index] = '\0';

return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: age of the dog.
 * @owner: the owner of the dog.
 *
 * return: the new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcpy(doggo->owner, owner);

	return (doggo);
}
