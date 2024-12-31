#include "header.h"

/*
join
=====
- join 2 string together
- Still can join if one of them are null
- If both are null, will return blank string

================================================================
Return
    char *s : Join string wiht malloc
    NULL    : Malloc fail
*/

char *join(char *s1, char *s2)
{
    int i;
    char *s;

    i = 0;
    s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (s)
    {
        while (s1 && *s1)
            s[i++] = *s1++;
        while (s2 && *s2)
            s[i++] = *s2++;
        s[i] = '\0';
    }
    return (s);
}

/*
void answer(char *s1, char *s2)
{
    char *result;

    result = join(s1, s2);
    printf("[%s]\n", result);
    free(result);
}

int main()
{
   answer("Hello ", "there");
   answer("Nice", NULL);
   answer(NULL, "Wonderful");
   answer(NULL, NULL);
   answer("", "");
   answer("H", "A");
}
*/