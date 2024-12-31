#include "ft_printf.h"

int put_ptr(uint64_t num)
{
    if (!num)
        return (put_str(NULL_POINTER));
    return (put_str("0x") + put_hex(num, 'x'));
}

/*
int main()
{
    printf(" =%d\n", put_ptr((int64_t)0));
    printf(" =%d\n", put_ptr((int64_t)4645678));

    printf("%p\n", (void *)0);
    printf("%p\n", (void *)4645678);
}
*/