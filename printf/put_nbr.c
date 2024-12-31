#include "ft_printf.h"

int put_nbr(int64_t num)
{
    int count;

    count = 0;
    if (num < 0)
    {
        num *= -1;
        count += put_char('-');
    }
    if (num >= 10)
        count += put_nbr(num / 10);

    count += put_char(num % 10 + '0');
    return (count);
}

/*
int main()
{
    printf(" =%d\n", put_nbr((int64_t)0));
    printf(" =%d\n", put_nbr((int64_t)1));
    printf(" =%d\n", put_nbr((int64_t)-1));
    printf(" =%d\n", put_nbr((int64_t)-2147483648));
    printf(" =%d\n", put_nbr((int64_t)2147483647));
    printf(" =%d\n", put_nbr((int64_t)4294967295));
}
*/