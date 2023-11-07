#include "libft.h"

char *ft_strrchr(const char *s, int c){
    size_t i = ft_strlen(s);
    size_t count = 0;
    unsigned char *str = (unsigned char *)s;
    if (c > 256){
        c = c % 256;
    }
    if (str[i] == c)
        return &str[i];
    while (i > 0){
        if (str[i] == c)
            return &str[i];
        i--;
    }
    if (str[i] == c)
        return &str[i];
    return NULL;
/*     while (i != '\0'){
        if (s[i] == c)
            count++;
        i++;
    }
    if (count == 0)
        return NULL;
    while(s[i] != c){
        i--;
    }
    while(i > 0)
    {
        s++;
        i--;
    }
    return (char *)s; */
}

/* int main(){
    const char s[] = "hello world";
    int c = 'l';
    printf("%s", ft_strrchr(s,c));
} */