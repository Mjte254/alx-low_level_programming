#include "main.h"
<<<<<<< HEAD

/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */

char *string_toupper(char *s)
=======
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
>>>>>>> 969e68b (5. Always look up)
{
	int i;

	i = 0;
<<<<<<< HEAD
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}

	return (s);
=======
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
>>>>>>> 969e68b (5. Always look up)
}
