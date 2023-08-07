#ifndef MAIN_H
#define MAIN_H

/* This main.h file contains standard library header files function protypes written for the tasks in directory 0x15-file_io */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
