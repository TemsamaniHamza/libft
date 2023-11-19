/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:11:41 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/18 21:11:46 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return;
    new -> next = *lst;
    *lst = new;
} 


/* int main()
{
    char *content1 = "hello";
    char *content2 = "world!";
    t_list *headr = ft_lstnew(content1);
    t_list *front = ft_lstnew(content2);

    headr -> next = front;
    front -> next = NULL;
    printf("the adress of headr : %p \n", headr);
    printf("the adress of front : %p \n" ,front);

    ft_lstadd_front(&front, headr);

    printf("After ft_lstadd_frong :");
    printf("the adress of headr : %p \n", headr);
    printf("the adress of front : %p\n" , front);
    printf("%s \n", (char *)headr -> content);
    printf("%s" , (char *)front -> content);
    return (0);
} */