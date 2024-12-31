#include "ft_printf.h"

static int allowed_specifier(const char *s, int *i);

// Check at every '%' must be followed by "csuidxXp%"
int check_format(const char *s)
{
    int i;

    i = -1;
    while (s[++i])
    {
        if (s[i] == '%' && !allowed_specifier(s, &i))
            return (FALSE);
    }
    return (TRUE);
}

// Checking s[i + 1] which is after "%"
// If specifier is allowed, increment *i++
static int allowed_specifier(const char *s, int *i)
{
    char *specifier;
    int j;

    j = -1;
    specifier = "csuidxXp%";
    while (specifier[++j])
    {
        if (s[*i + 1] == specifier[j])
        {
            (*i)++;
            return (TRUE);
        }
    }
    write(2, ERR_MSG, get_len(ERR_MSG));
    return (FALSE);
}

/* 
void answer(char *s)
{
    printf("%s result=%d\n", s, check_format(s));
    printf("\n\n========================\n");
}

int main()
{
    answer("123%d");
    answer("[%s]now");
    answer("%c");
    answer("%s");
    answer("%u");
    answer("%d");
    answer("%i");
    answer("%x");
    answer("%X");
    answer("%p");
    answer("%%");
    answer("hello there");
    answer("nice day %");
    answer("%");
}
*/


/*
int main()
{
    printf("Correct\n=========\n");
    printf("%d\n", allowed_specifier('c'));
    printf("%d\n", allowed_specifier('s'));
    printf("%d\n", allowed_specifier('u'));
    printf("%d\n", allowed_specifier('i'));
    printf("%d\n", allowed_specifier('d'));
    printf("%d\n", allowed_specifier('x'));
    printf("%d\n", allowed_specifier('X'));
    printf("%d\n", allowed_specifier('%'));

    printf("Wrong\n=========\n");
    printf("%d\n", allowed_specifier('\0'));
    printf("%d\n", allowed_specifier('n'));
    printf("%d\n", allowed_specifier('\t'));
    printf("%d\n", allowed_specifier('\n'));
    printf("%d\n", allowed_specifier('3'));
}
*/  