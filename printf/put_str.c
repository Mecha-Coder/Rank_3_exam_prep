#include "ft_printf.h"

int put_str(char *s)
{
    if (!s)
        return (put_str(NULL_STR));
    return (write(1, s, get_len(s)));
}