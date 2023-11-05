/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:44:33 by htemsama          #+#    #+#             */
/*   Updated: 2023/10/30 16:49:45 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str){
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2){
	size_t i = 0;
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);
    int len = len1 + len2 - 1;
    char *str;
	str = ((char *)malloc(len * sizeof(char)));
	if (str == NULL)
		return NULL;
    while (s1[i] != '\0'){
        str[i] = s1[i];
        i++;
    }
    size_t j = 0;
    while(s2[j] != '\0'){
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}

int main(){
    char const *s1 = "Hello ";
    char const *s2 = "World!";
    printf("%s\n", ft_strjoin(s1,s2));
}
