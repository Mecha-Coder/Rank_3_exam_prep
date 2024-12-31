#include "ft_printf.h"

int put_char(char c)
{
    return (write(1, &c, 1));
}

/*
int main()
{
    printf(" =%d\n", ft_putchar('c'));
    printf(" =%d\n", ft_putchar('\n'));
    printf(" =%d\n", ft_putchar('\0'));
}
*/