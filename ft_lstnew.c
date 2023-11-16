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

/* typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
 */
/* t_list *ft_lstnew(void *content)
{
    t_list *nnode;

    nnode = (t_list *)malloc(sizeof(t_list));
    if (!nnode)
        return (NULL);
    nnode->content = content;
    nnode->next = NULL;
    return (nnode);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return NULL;
    new->next = lst;
    *lst = new; 
}

int ft_lstsize(t_list *lst)
{
    size_t i = 0;
    while(lst != NULL)
    {
        i++;
        lst = lst -> next;
    }
    return (i);
}

t_list *ft_lstlast(t_list *lst)
{
    while(lst != NULL)
        lst = lst -> next;
    return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{

} */
/* int main(void)
{
    char *str = "Hello, world!";
    t_list *node = ft_lstnew(str);

    printf("Content: %s\n",(char *)node->content);
    printf("Next: %s\n", (char *)node->next);
    free(node);
    return (0);
} */
