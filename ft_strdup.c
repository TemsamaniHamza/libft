/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:00:03 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/05 14:00:07 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s){
    size_t i = 0;

    while (s[i] != '\0')
        i++;
    return (i);
}


char *strdup(const char *s){
    int len = ft_strlen(s);
    char *ptr;
    size_t i = 0;
    ptr = (char *)malloc(len * sizeof(char));
    while (s[i] != '\0')
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
