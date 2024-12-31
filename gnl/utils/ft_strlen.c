#include "header.h"

int  ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s && *s++)
        i++;
    return (i);
}

/*
int main()
{
    printf("%d\n", ft_strlen("hello"));
    printf("%d\n", ft_strlen("done"));
    printf("%d\n", ft_strlen(""));
    printf("%d\n", ft_strlen(NULL));
}
*/