#include "libft.h"

/*  void *ft_memchr(const void *s, int c, size_t n){
    size_t i = 0;
    size_t count = 0;
    unsigned char *str = (unsigned char *)s;

    while(str[i] != '\0')
    {
        if (str[i] == c)
        {
            count++;
        }
        i++;
    }
    if (count == 0){
        return NULL;
    }
    i = 0;
    while (str[i] != c){
        i++;
    }
    return (unsigned char *)&str[i];
} */

void *ft_memchr(const void *s, int c, size_t n){
    size_t i = 0;
    unsigned char *str = (unsigned char *)s;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return &str[i];
        i++;
    }
    return NULL;
}
 

/* int main() {
    const char str[] = "Hello, World!";
    char c = 'z';
    size_t n = 9;
    char *result = ft_memchr(str, c, n);
    printf("%s", result);
    return 0;

} */