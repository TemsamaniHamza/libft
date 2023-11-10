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

/* #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size) {
	size_t i = 0;
	size_t j = strlen(src);
	size_t k = strlen(dst);
	size_t len = k;

	if (size == 0) {
		return (j);
	} else if (size < k) {
		return (size + j);
	} else {
		while (src[i] != '\0' && len < size - 1) {
			dst[len] = src[i];
			len++;
			i++;
		}
		if (len < size) {
			dst[len] = '\0';
		}
		return (j + k);
	}
} */

/*
int	main(void){
	char dest[] = "Hello";
	char src[] = "NULLL";
	size_t size = 2;
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	return (0);
}  */
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
