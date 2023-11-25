/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:29:57 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/07 20:52:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;
	 if (!dst || size == 0)
	 	return (ft_strlen(src));
	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dst);
	len = k;
	if (size == 0)
		return (j);
	if (size < k)
		return (size + j);
	while (src[i] != '\0' && len < size - 1)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (k + j);
}

/* size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dest != NULL && src != NULL) {
		while (dest[i])
			i++;
		while (src[j] && size > 0 && j < size)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (i);
	}
	return (i);
} */
