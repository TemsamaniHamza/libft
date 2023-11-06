/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:30:33 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/06 18:30:35 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd){
    write (fd,s,ft_strlen(s));
}
/* 
int main(){
    char s[] = "Hello world";
    int fd = 1;
    ft_putstr_fd(s,fd);
}
 */