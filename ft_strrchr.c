#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c){
    int i = 0;
    int count = 0;
    while (s[i] != '\0'){
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
    return (char *)s;
}

int main(){
    const char s[] = "hello world";
    int c = 'l';
    printf("%s", ft_strrchr(s,c));
}