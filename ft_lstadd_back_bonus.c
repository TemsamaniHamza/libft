/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:15:00 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/19 01:15:01 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *bullst;
	if (lst != NULL)
    {
        if (*lst == NULL)
            *lst = new
        else
        {
            bullst = *temp
            while (bullst -> next != NULL)
                bullst = bullst -> next;
            bullst -> next = new;
        }
    }
}

int main()
{
    t_list *node1;
    t_list *node2;
    t_list *tail;
    t_list *new;

    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    tail  = malloc(sizeof(t_list));
    new  = malloc(sizeof(t_list));

    node1 -> next = node2;
    node2 -> next = tail;
    tail -> next = NULL;

    ft_lstadd_back(&node1,tail);
    while (node1 != NULL)
    {
        printf("%s", )
    }
    return 0;
}


