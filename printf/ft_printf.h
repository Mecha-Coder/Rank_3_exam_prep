#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdarg.h>

// Remove later
#include <stdio.h>

#define BASE16_LOW "0123456789abcdef"
#define BASE16_UP "0123456789ABCDEF"

#define TRUE 1
#define FALSE 0

#define ERR_MSG "Invalid format\n"

#ifdef __APPLE__
# define NULL_STR "(NULL)" 
# define NULL_POINTER "0x0"
#else
# define NULL_STR "(null)"
# define NULL_POINTER "(nil)"     
#endif



int put_char(char c);
int get_len(char *s);
int put_str(char *s);
int put_nbr(int64_t num);
int put_ptr(uint64_t num);
int put_hex(uint64_t num, char hex);
int check_format(const char *s);
int ft_printf(const char *s, ...);

#endif