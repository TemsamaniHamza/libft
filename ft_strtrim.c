/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:13:15 by htemsama          #+#    #+#             */
/*   Updated: 2023/10/30 17:13:18 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int count)
{
	int	i;

	if (count == 8)
	{
		i = 2;
	}
	else if (count == 5 || count == 3)
		i = 1;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	count;
	size_t	len;
	size_t	j;
	char	*str;

	i = 0;
	k = ft_strlen(s1) - 1;
	count = 0;
	len = k + 1;
	j = 0;
	if (s1[0] == set[0])
		count += 5;
	if (s1[0] == s1[k])
		count += 3;
	len = len - ft_count(count) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if ((count == 5 || count == 8) && (i == 0))
			i++;
		if ((count == 3 || count == 8) && (i == k))
			break ;
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(void){
	char const *s1 = " hello world ";
	char const *set = " ";
	char *result = ft_strtrim(s1,set);
	printf("%s", result);
	return (0);
} */
