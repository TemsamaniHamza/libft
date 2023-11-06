/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:35:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/17 23:35:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
    size_t i = 0;
    unsigned char *dest1; 
    unsigned char *src1; 

    dest1 = (unsigned char *)dest;
    src1 = (unsigned char *)src;
    
    while (i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return(dest);
}

/* void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*_src;
	unsigned char	*_dest;

	_src = (unsigned char *)src;
	_dest = (unsigned char *)dest;
	while (n > 0)
	{
		*_dest = *_src;
		_dest++;
		_src++;
		n--;
	}
	return (dest);
} */