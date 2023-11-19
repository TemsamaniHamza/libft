/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 01:00:07 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/19 01:00:08 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/* int main()
{
    t_list *head = ft_lstnew("hello");
    t_list *node2 = ft_lstnew("world");
    t_list *node3 = ft_lstnew("hello");

    head -> next = node2;
    node2 -> next = node3;
    node3 -> next = NULL;
    int i = ft_lstsize(head);
    printf("%d", i);
    return (0);
} */
