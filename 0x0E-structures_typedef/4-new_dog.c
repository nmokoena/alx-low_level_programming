#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of string.
 * @s: strings to evaluate.
 * return: the length of the string.
 */

int _strlen(char s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;
}

return (i);

}


/**
 * _strcpy - copies the string to the pointer by src
 * including the termination null byte (\0)
 * to the buffer point by dest.
 * @dest: pointer to the buffer in which we copy the string.
 * @src: string to be copied.
 * return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int len, i;

