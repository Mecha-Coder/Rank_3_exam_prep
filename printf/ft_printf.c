#include "ft_printf.h"

static int process_format(char c, va_list arg);

int ft_printf(const char *s, ...)
{
    int i;
    int count;
    va_list arg;

    i = -1;
    count = 0;
    if (check_format(s))
    {
        va_start(arg, s);
        while (s[++i])
        {
            if (s[i] == '%')
                count += process_format(s[++i], arg);
            else
                count += put_char(s[i]);
        }
        va_end(arg);
    }
    return(count); 
}

static int process_format(char c, va_list arg)
{
    int count;

    count = 0;
    if (c == 'c')
        count += put_char((char)va_arg(arg, int));
    else if (c == 's')
        count += put_str(va_arg(arg, char *));
    else if (c == 'd' || c == 'i')
        count += put_nbr((int64_t)va_arg(arg, int));
    else if (c == 'u')
        count += put_nbr((int64_t)va_arg(arg, unsigned int));
    else if (c == 'x' || c == 'X')
        count += put_hex((uint64_t)va_arg(arg, unsigned int), c);
    else if (c == 'p')
        count += put_ptr((uint64_t)va_arg(arg, void *));
    else if (c == '%')
        count += put_char('%');
    return (count);
}