#include "main.h"
<<<<<<< HEAD

/**
 * _puts - prints a string
 * @str: string to be printed
 */

=======
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
>>>>>>> db82ed2 (3. I do not fear computers. I fear the lack of them)
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
<<<<<<< HEAD
	_putchar('\n');
=======
		_putchar('\n');
>>>>>>> db82ed2 (3. I do not fear computers. I fear the lack of them)
}
