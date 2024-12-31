#include "get_next_line.h"

// Scan string and return the position (not index) of the character "\n"
// The return value will be passed into function "extract" & "trim" as n
int found_newline(char *s)
{
    int i;

    i = -1;
    while(s && s[++i])
    {
        if (s[i] == '\n')
            return (i + 1);    
    }
    return (0);
}

// Malloc and return the fist n number of string
char *extract(char *s, int n)
{
    char *ptr;
    int i;

    i = 0;
    if (!s || n < 1 || n > ft_strlen(s))
        return (NULL);
    ptr = (char *)malloc(n + 1);
    if (ptr)
    {
        while (n--)
            ptr[i++] = *s++;
        ptr[i] = '\0';
    }
    return (ptr);
}

// Malloc and return the balance string after n number of character
char *trim(char *s, int n)
{
    char *ptr;
    int i;

    i = 0;
    if (!s || n < 1 || n >= ft_strlen(s))
        return (NULL);
    while (s[n + i])
        i++;
    ptr = (char *)malloc(i + 1);
    if (ptr)
    {
        i = 0;
        while (s[n + i])
        {
            ptr[i] = s[n + i];
            i++;
        }
        ptr[i] = '\0';
    }
    return (ptr);
}

// join 2 string together
// Still can join if one of them is null
// If both are null, will return blank string
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

int  ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s && *s++)
        i++;
    return (i);
}