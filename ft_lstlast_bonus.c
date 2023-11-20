/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:07:43 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/19 01:07:46 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
		lst = lst->next;
	return (lst);
}

/* int main()
{
    t_list *head = ft_lstnew("hello ");
    t_list *node1= ft_lstnew("this is the" );
    t_list *node2= ft_lstnew("last node");
    t_list *node3= ft_lstnew("hhh");

    head -> next = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = NULL;
    printf("%p", node3);
    return 0;
} */