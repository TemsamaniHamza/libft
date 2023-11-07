/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:34:27 by marvin            #+#    #+#             */
/*   Updated: 2023/11/07 19:45:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* char *ft_strchr(const char *s, int c){
    int count = 0;
    while (*s != '\0'){
        if (*s == c)
        {
            count++;
            return (char *)s;
            break;
        }
        s++;
    }
    if (count = 0)
    {
        return(NULL);
    }
} */

char *ft_strchr(const char *s, int c){
    size_t i = 0;
    unsigned char *str = (unsigned char *)s;
    if (c > 256){
        c = c % 256;
    }
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return &str[i];
        i++;
    }
    if (str[i] == '\0' && str[i] == c)
            return &str[i];
    return NULL;
}
/* int main(){
        const char *str = "hello world!";
        int c = 'w';
        printf("%s\n", ft_strchr(str,c));
}
 */