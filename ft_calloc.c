/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:54:02 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/04 17:54:06 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n){
    size_t i = 0;
    char *str = (char *)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

void *ft_calloc(size_t number, size_t size)
{
    void *ptr;
    ptr = (void *)malloc (number * size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr,number);
    return (ptr);
}

/* int main(){
    size_t number = 2;
    size_t size = sizeof(int);
    char *ptr;
    ptr = (char *)ft_calloc(number, size);
    printf("%s", ptr);
} */