/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:33:44 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/04 17:33:46 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int ft_atoi(const char *nptr){
    size_t i = 1;
    size_t sign = 1;
    size_t result = 0;
    if (nptr[0] == '-')
        sign = -1;
    while (nptr[i] >= '0' && nptr[i] <= '9'){
        result = (result * 10) + (nptr[i] - '0');
        i++;
    }
    return result * sign;
} 

int main(){
    const char *nptr = "--56414";
    char result = ft_atoi(nptr);
    printf("%d", result);
    return 0;
}