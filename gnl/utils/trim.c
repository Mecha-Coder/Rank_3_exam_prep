#include "header.h"

/*
trim
=======
- Malloc and return the balance string after n number of character

=====================================================================
Example

n      : 2         
string : jpaul
pos    : 12  (not index)
return : aul

=====================================================================
Param
- char : *s (Must not be NULL)
- int  :  n (Must be > 0 and n + 1 != /0)

=====================================================================
Return (char *)
   O.K : pointer to the newly malloc string
   NULL: Malloc error
*/

char *trim(char *s, int n)
{
    char *ptr;
    int i;

    i = 0;
    if (!s || n < 1 || n >= ft_strlen(s))          //       1 2
        return (NULL);                             // 0 1 2 3 4
    while (s[n + i])                               // h e l l o
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

/*
void answer(char *s, int n)
{
    char *result;
    result = trim(s, n);
    if (result)
    {
        printf("input= %s, n = %d, result = %s\n\n",s, n, result);
        free(result);
    }
    else
        printf("input= %s, n = %d, result = NULL\n\n",s, n);
}


int main()
{
    answer(NULL, 5);      // NULL string
    answer("h", 2);       // n bigger than strlen(s)
    answer("hello", 10);  
    answer("dsa", -2);    // n below 1
    answer("dsa", 0);     
    answer("dsa", 1);     // return something
    answer("dsa", 2);
    answer("hello", 5);
    answer("hello", 6);
    answer("hello", 3);
}
*/

