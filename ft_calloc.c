/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:54:02 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/04 17:54:06 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	if (number && size && number > (INT_MAX))
		return (NULL);
	ptr = (void *)malloc(number * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (number * size));
	return (ptr);
}

/* int main(){
	size_t number = 2;
	size_t size = sizeof(int);
	char *ptr;
	ptr = (char *)ft_calloc(number, size);
	printf("%s", ptr); 
} */