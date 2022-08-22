#ifndef H
#define H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

ssize_t read_textfile(const char *filename, size_t letters);


#endif /* H */
