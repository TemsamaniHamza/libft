/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:10:28 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/06 15:10:30 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	to_upp(unsigned int j, char c)
{
	j = 32;
	if (c >= 'a' && c <= 'z')
		c -= j;
	else
		printf("Try next time");
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	j;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = f(j, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void){
	char s[] = "cccc";
	printf("%s", ft_strmapi(s,to_upp));
	return (0);
} */
