#include "header.h"

/* 
found_newline
=============
- Scan string and return the position (not index) of the character "\n"
- The return value will be passed into function "extract" & "trim" as n

=======================================================================
Param
- char *s : Null terminated string

Return (int)
    n : 0 (Not found)
    n : > 0 Not \n character
*/

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

/*
int main()
{
    char *s;
    int n;
    char *first;
    char *second;

    printf("%d\n",found_newline(""));
    printf("%d\n",found_newline(NULL));
    printf("%d\n",found_newline("\n"));
    printf("%d\n",found_newline("\n\n"));
    printf("%d\n",found_newline("hello\nniceday"));
    printf("%d\n",found_newline("welcome\n"));
    printf("%d\n",found_newline("\nDone\n"));
    printf("%d\n",found_newline("Done"));

    printf("\n\n==========================================\n");
    s = "hello\nniceday";
    n = found_newline(s);
    first = extract(s, n);
    second = trim(s, n);

    printf("Input: %s \n1st: %s \n2nd: %s \n", s, first, second);
    if (first)
        free(first);
    if (second)
    free(second);


    printf("\n\n==========================================\n");
    s = "welcome\n";
    n = found_newline(s);
    first = extract(s, n);
    second = trim(s, n);

    printf("Input: %s \n1st: %s \n2nd: %s \n", s, first, second);
    if (first)
        free(first);
    if (second)
    free(second);
}
*/