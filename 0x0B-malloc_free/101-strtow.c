<<<<<<< HEAD
#include "main.h"

/**
 * len - returns length of str
 *  @str: string to be counted
 *
 *  Return: length of the string
 */

int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

/**
 * num_words - counts the number of words in str
 * @str: string to be used
 *
 *  Return: number of words
 */

int num_words(char *str)
{
	int i = 0, words = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

/**
 * strtow - splits a stirng into words
 * @str: string to be splitted
 *
 * Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, words = num_words(str);

	if (words == 0)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split != NULL)
	{
		for (i = 0; i <= len(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				split[j] = (char *)malloc(sizeof(char) * size + 1);
				if (split[j] != NULL)
				{
					while (temp < size)
					{
						split[j][temp] = str[(i - size) + temp];
						temp++;
					}
					split[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);
					return (NULL);
				}
			}
		}
			split[words] = NULL;
			return (split);
		}
		else
			return (NULL);
=======
#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
>>>>>>> 61a7072 (6. I will show you how great I am)
}
