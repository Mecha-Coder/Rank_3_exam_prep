#include "ft_printf.h"

int main()
{
    char *s = "lolo";
    char *s2 = "";
    char *s3 = NULL;

    printf(" =%d\n", ft_printf("[%c]", '0'));
    printf("[%c]", '0'); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%s]", s));
    printf("[%s]", s); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%u]", -1));
    printf("[%u]", -1); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%i]", get_len(s)));
    printf("[%i]", get_len(s)); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%d]", 6));
    printf("[%d]", 6); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%x]", -1));
    printf("[%x]", -1); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%X]", -1));
    printf("[%X]", -1); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%p]", s));
    printf("[%p]", s); 
    printf("\n=====================================\n");
    
    printf(" =%d\n", ft_printf("[%%]"));
    printf("[%%]"); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%%]"));
    printf("[%%]"); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%s]", s2));
    printf("[%s]", s2); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%s]", s3));
    printf("[%s]", s3); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%c]", '\0'));
    printf("[%c]", '\0'); 
    printf("\n=====================================\n");

    printf(" =%d\n", ft_printf("[%p]", (void *)0));
    printf("[%p]", (void *)0); 
    printf("\n=====================================\n");
}