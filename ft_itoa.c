/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:52:34 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/06 13:52:44 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_calculen(int n)
{
    int nb = n;
    size_t count = 0;
    if (nb == 0)
        return 1;
    while (nb > 0){
        nb = nb / 10;
        count++;
    }
    return count;
}

char *ft_swap(char *str){
    size_t len = ft_strlen(str) - 1;
    size_t i = 0;
    size_t j = ft_strlen(str);
    char temp;
    while (i < len){
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
    str[j] = '\0';
    return (str);
}

char *ft_itoa(int n){
    size_t len = ft_calculen(n);
    size_t i = 0;
    int rest;
    char *str;
    str=(char*)malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    while (n > 0 && len > 0){
        rest = n % 10;
        str[i] = rest + '0';
        n = n / 10;
        len--;
        i++;
    }
    str[i] = '\0';
    ft_swap(str);
    return (str);
} 


/* 
int main(){
    int n = 1234;
    char *result = ft_itoa(n);
    int i = 0;
    while (result[i] != '\0')
    {
        printf("%c", result[i]);
        i++;
    }
    return 0;
} */