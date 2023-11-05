/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:34:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 14:34:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c){
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
}

int main(){
        const char *str = "hello world!";
        int c = 'w';
        printf("%s\n", ft_strchr(str,c));
}
