#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# define TRUE 1
# define FALSE 0

int  ft_strlen(char *s);
char *extract(char *s, int n);
char *trim(char *s, int n);
int found_newline(char *s);
char *join(char *s1, char *s2);
char *get_next_line(int fd);

#endif


