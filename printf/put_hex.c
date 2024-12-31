#include "ft_printf.h"

int put_hex(uint64_t num, char hex)
{
    int count;

    count = 0;
    if (num >= 16)
        count += put_hex(num / 16, hex);
    
    if (hex == 'X')
        count += put_char(BASE16_UP[num % 16]);
    
    else if (hex == 'x')
        count += put_char(BASE16_LOW[num % 16]);
    
    return (count);
}

/*
int main()
{
    printf(" =%d\n", put_hex((uint64_t)0, 'x'));
    printf(" =%d\n", put_hex((uint64_t)0, 'X'));

    printf("\n----------------\n");
    printf(" =%d\n", put_hex((uint64_t)1, 'x'));
    printf(" =%d\n", put_hex((uint64_t)1, 'X'));

    printf("\n----------------\n");
    printf(" =%d\n", put_hex((uint64_t)9, 'x'));
    printf(" =%d\n", put_hex((uint64_t)9, 'X'));

    printf("\n----------------\n");
    printf(" =%d\n", put_hex((uint64_t)10, 'x'));
    printf(" =%d\n", put_hex((uint64_t)10, 'X'));

    printf("\n----------------\n");
    printf(" =%d\n", put_hex((uint64_t)11, 'x'));
    printf(" =%d\n", put_hex((uint64_t)11, 'X'));

    printf("\n----------------\n");
    printf(" =%d\n", put_hex((uint64_t)2147483648, 'x'));
    printf(" =%d\n", put_hex((uint64_t)2147483648, 'X'));
    
    printf("\n----------------\n");
    printf(" =%d\n", put_hex((uint64_t)4294967295, 'x'));
    printf(" =%d\n", put_hex((uint64_t)4294967295, 'X'));

    printf("\n----------------\n");
    printf(" =%d\n", put_hex(18446744073709551615ULL, 'x'));
    printf(" =%d\n", put_hex(18446744073709551615ULL, 'X'));
}
*/