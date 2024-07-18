#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * len - returns lenth of str
 * @str: string counted
 * Return: returns the length
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
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: count of args passed to the function
 * @av:array of arguments
 * Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = ac, j, sum = 0, temp = 0;
=======
>>>>>>> master
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;
<<<<<<< HEAD
=======
>>>>>>> 856a411 (5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe)
>>>>>>> master

	if (ac == 0 || av == NULL)
		return (NULL);

<<<<<<< HEAD
=======
<<<<<<< HEAD
	while (ac--)
		sum += (len(av[ac]) + 1);
	new_string = (char *) malloc(sum + 1);

	if (new_string != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_string[j + temp] = av[k][j];
			new_string[temp + j] = '\n';
			temp += (j + 1);
			k++;
		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
=======
>>>>>>> master
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
<<<<<<< HEAD
=======
>>>>>>> 856a411 (5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe)
>>>>>>> master
}
