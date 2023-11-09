/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:33:44 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/09 17:16:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int ft_atoi(const char *nptr){
    int i = 0;
    int sign = 1;
    int result = 0;
    while (nptr[i] == 32 || nptr[i] >= 9 && nptr[i]  <= 13){
        i++;
    }  
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(nptr[i]) == 1){
        result = (result * 10) + (nptr[i] - '0');
        i++;
    }
    return result * sign;
}
/* 
int main(){
    const char *nptr = "--56414";
    char result = ft_atoi(nptr);
    printf("%d", result);
    return 0;
} */