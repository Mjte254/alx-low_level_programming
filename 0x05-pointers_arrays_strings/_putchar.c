#include <unistd.h>

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * _putchar - write character c to stdout
 * @c: char to be printed
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
=======
>>>>>>> master
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
<<<<<<< HEAD
=======
>>>>>>> db82ed2 (3. I do not fear computers. I fear the lack of them)
>>>>>>> master
}
