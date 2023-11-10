/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:34:21 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/10 20:34:22 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int	main(void){
	char dst[20];
	const char src[] = "hello wolrd";
	size_t size2 = 4;
	size_t size1 = 0;
	ft_strlcpy(dst,src,size1);
	printf("the first string is : %s\n", dst);
	ft_strlcpy(dst,src,size2);
	printf("the second string is : %s\n", dst);
} */
