/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:32:50 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/11 23:32:51 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *nnode;

    t_list = (t_list *)malloc(sizeof(t_list));
    if (!t_list)
        return (NULL);
    nnode->content = content;
    nnode->next = NULL;
    return (nnode);
}
