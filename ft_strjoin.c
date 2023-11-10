/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:44:33 by htemsama          #+#    #+#             */
/*   Updated: 2023/10/30 16:49:45 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	int		len1;
	int		len2;
	char	*str;
	size_t	j;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ((char *)malloc((len1 + len2 - 1) * sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/* int main(){
	char const *s1 = "Hello ";
	char const *s2 = "World!";
	printf("%s\n", ft_strjoin(s1,s2));
} */
