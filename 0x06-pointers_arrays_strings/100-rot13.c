#include "main.h"
<<<<<<< HEAD

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: the pointer to dest
=======
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
>>>>>>> 11b8206 (8. rot13)
 */

char *rot13(char *s)
{
<<<<<<< HEAD
	int i, j;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
=======
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
>>>>>>> 11b8206 (8. rot13)
				break;
			}
		}
	}
<<<<<<< HEAD

=======
>>>>>>> 11b8206 (8. rot13)
	return (s);
}
