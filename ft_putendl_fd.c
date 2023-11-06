/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:33:58 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/06 18:34:00 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_putendl_fd(char *s, int fd){
    write (fd,s,ft_strlen(s));
    write (fd,"\n",1);
}

/* int main(){
    char s[] = "Hello world";
    int fd = 1;
    ft_putendl_fd(s,fd);
}
 */