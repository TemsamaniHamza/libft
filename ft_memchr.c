#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n){
    size_t i = 0;
    size_t count = 0;
    char *str = (char *)s;
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
    return (char *)&str[i];
}

int main() {
    const char str[] = "Hello, World!";
    char c = 'z';
    size_t n = 9;
    char *result = ft_memchr(str, c, n);
    printf("%s", result);
    return 0;

}