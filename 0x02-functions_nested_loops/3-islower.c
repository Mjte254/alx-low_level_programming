#include "main.h"

/**
<<<<<<< HEAD
 * _islower - checks if a character is lowercase
 * @c: the character
 * Return: 1 if letter is lowerase, 0 if not
 */
=======
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

>>>>>>> 0010702 (3. islower)
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
