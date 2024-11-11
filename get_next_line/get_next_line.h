#ifndef FT_GET_NEXT_LINE
# define FT_GET_NEXT_LINE
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
# define BUFFER_SIZE 1

char *get_next_line(int fd);
#endif
