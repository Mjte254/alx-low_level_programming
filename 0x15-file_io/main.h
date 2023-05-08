<<<<<<< HEAD
#ifndef _MAIN_
#define _MAIN_
=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> 1e1a3fd (Tread lightly, she is near)

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> 1e1a3fd (Tread lightly, she is near)

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
