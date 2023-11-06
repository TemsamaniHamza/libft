/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:13 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/04 16:07:17 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strnstr(const char *big, const char *little, size_t len){
    size_t i = 0;
    size_t j = 0;
    size_t f_occu;
    if (big == NULL)
        return NULL;
    if (little == NULL)
        return (char *)big;
    size_t k = ft_strlen(little);
    while (big[i] != '\0') 
    {
        if (big[i] == little[j])
        {
            f_occu = i - 1;
            while (little[j] != '\0' && big[i] == little[j]) 
            {
                j++;
                i++;
            }
        }
        if (j == k)
        {
            return (char *)&big[f_occu];
        }
        i++;
    }
    return NULL;
} 

/*  int main(){
    const char big[] = "Hello little string";
    const char *little = "NULL";
    size_t len = 10;
    printf("%s", ft_strnstr(big,little,len));
    return 0;
} */