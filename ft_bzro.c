
#include "libft.h"

void ft_bzero(void *s, size_t n){
    size_t i = 0;
    char *str = (char *)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}
/* 
int main(){
        char s[] = "hello world";
        size_t n = 2;
        ft_bzero(s+2, n);
        printf("%s", s);
        return 0;
}
 */