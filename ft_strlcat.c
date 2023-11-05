/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:29:57 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/03 21:17:25 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcat(char	*dest, char	*src, size_t size)
{
	int	i;
	int	j;

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
		return (dest);
	}
	return "zbi";
}

int main(){
	char dest[] = "Hello";
	char src[] = "NULLL";
	size_t size = 2;
	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	return 0;
}