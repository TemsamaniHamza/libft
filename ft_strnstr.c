/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:13 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/09 16:34:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = ft_strlen(little);
	while (big[i] != '\0' && i < len)
	{
		if (ft_memcmp(&big[i], little, k) == 0 && k + i <= len)
			return ((char *)&big[i]);
		i++;
	}
	if (little[0] == '\0')
		return ((char *)big);
	if (big[i] == '\0' || i == len)
		return (NULL);
	return ((char *)&big[i]);
}
 