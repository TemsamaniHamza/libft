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
	size_t	max_sizet;

	max_sizet = 4294967295;
	if (number > max_sizet || size >max_sizet || (number * size) > 4294967295)
		return (NULL);
	ptr = (void *)malloc(number * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (number * size));
	return (ptr);
}
