#include "main.h"

/**
<<<<<<< HEAD
=======
<<<<<<< HEAD
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 *  @text_content: added content.
 *
 *  Return: 1 if the file exists. -1 if the fails does not exist or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;
=======
>>>>>>> master
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
<<<<<<< HEAD
=======
>>>>>>> beea111 (Speak gently, she can hear)
>>>>>>> master

	if (filename == NULL)
		return (-1);

<<<<<<< HEAD
=======
<<<<<<< HEAD
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);
=======
>>>>>>> master
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
<<<<<<< HEAD
=======
>>>>>>> beea111 (Speak gently, she can hear)
>>>>>>> master

	return (1);
}
