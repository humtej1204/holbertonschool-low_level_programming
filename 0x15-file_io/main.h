#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* MACROS */
#define BUFFERSIZE 1024
#define READ_ERROR 1
#define WRITE_ERROR 2

/* prototypes of functions */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *fileName);
int error_handler(int fd, char *fname, int type, char *buffer);
void close_file(int fd);

#endif
