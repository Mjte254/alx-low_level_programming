<<<<<<< HEAD
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str:String to be copied
 * Return: NULL in case of error, pointer to allocated
 * space
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
=======
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
>>>>>>> c6c4161 (1. The woman who has no imagination has no wings)
}
