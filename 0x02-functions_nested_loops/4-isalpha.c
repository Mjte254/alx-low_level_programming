#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * _isalpha - checks for alphabets
 * @c: character to be checked
 *
 * Return: 1 if charater is a letter ,0 otherwised
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
=======
>>>>>>> master
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
<<<<<<< HEAD
=======
>>>>>>> 671d58e (4. isalpha)
>>>>>>> master
}
