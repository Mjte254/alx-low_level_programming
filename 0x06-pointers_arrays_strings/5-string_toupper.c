#include "main.h"
<<<<<<< HEAD
=======
<<<<<<< HEAD

/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */

char *string_toupper(char *s)
=======
>>>>>>> master
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
<<<<<<< HEAD
=======
>>>>>>> 969e68b (5. Always look up)
>>>>>>> master
{
	int i;

	i = 0;
<<<<<<< HEAD
=======
<<<<<<< HEAD
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}

	return (s);
=======
>>>>>>> master
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
<<<<<<< HEAD
=======
>>>>>>> 969e68b (5. Always look up)
>>>>>>> master
}
