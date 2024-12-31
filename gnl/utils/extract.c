#include "header.h"

/*
extract
=======
- Malloc and return the fist n number of string

=====================================================================
Example

n      : 2         
string : jpaul
pos    : 12  (not index)
return : jp

=====================================================================
Param
- char : *s (Must not be NULL)
- int  :  n (Must be > 0 and not bigger than strlen(s))

=====================================================================
Return (char *)
   O.K : pointer to the newly malloc string
   NULL: Malloc error
*/

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

/*
void answer(char *s, int n)
{
    char *result;
    result = extract(s, n);
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

