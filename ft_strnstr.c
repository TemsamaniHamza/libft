/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:13 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/09 16:34:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/* char *ft_strnstr(const char *big, const char *little, size_t len){
    size_t i = 0;
    size_t j = 0;
    size_t f_occu;
    size_t k = ft_strlen(little);
    if (len == 0)
        return 0;char *ft_strnstr(const char *big, const char *little, size_t len){
    if (big == NULL)
        return NULL;
    if (little == NULL)
        return (char *)big;
    while (big[i] != '\0' && i < len) 
    {
        if (big[i] == little[j])
        {
            f_occu = i;
            while (little[j] != '\0' && big[i] == little[j]) 
            {
                if (j == k)
                {char *ft_strnstr(const char *big, const char *little, size_t len){
                    return (char *)&big[f_occu];
                }
                j++;
                i++;
            }
            if (little[j] != '\0' && big[i] != little[j]){
                i = f_occu + 1;
            }
        }    
        if (little[j] == '\0')
            return (char *)&big[f_occu];
        i++;
    }
    return NULL;
}  */
/* char *ft_strnstr(const char *big, const char *little, size_t len){
    size_t i = 0;
    size_t j = 0;
    size_t f_occu;
    size_t k = ft_strlen(little);
    if (len == 0)
        return 0;
    if (big == NULL)
        return NULL;
    if (little == NULL)
        return (char *)big;
    while (big[i] != '\0' && i < len) 
    {
        if (big[i] == little[j])
        {
            f_occu = i;
            while (big[i] == little[j]){
                i++;
                j++;
            }
            if (big[i] != little[j])
                i = f_occu;
        }
        i++;
    }
    return (char*)&big[f_occu];
} */
char *ft_strnstr(const char *big, const char *little, size_t len){
    size_t i = 0;
    size_t k = ft_strlen(little);
    while (big[i] != '\0' && i < len){
        if (ft_memcmp(&big[i],little,k) == 0 && k+i <= len)
            return (char *)&big[i];
        i++;
    }
    if (little == NULL || little[0] == '\0')
        return (char *)big;
    if (big[i] == '\0' || i == len)
        return NULL;
    return (char *)&big[i];
}
/*   int main(){
    const char big[] = "Hello little string";
    const char *little = "NULL";
    size_t len = 10;
    printf("%s", ft_strnstr(big,little,len));
    return 0;
}  */