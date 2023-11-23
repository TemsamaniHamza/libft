/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:34:51 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/19 20:34:53 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
/* void del(void *content)
{
    free(content);
} */

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *bullst;
    if (!lst || !del)
        return ;
    while(*lst != NULL)
    {
        bullst = *lst;
        *lst = (*lst) -> next;
        del(bullst->content);
        free(bullst);
    }
    *lst = NULL;
}
/* 
int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = NULL;

    ft_lstclear(&node1,del);

    if (node1 != NULL)
        printf("u're bad hahhahaha");
    else
        printf("it was easy anyway");
    return (0);
} */