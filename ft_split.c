/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cleat_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:26:30 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/13 10:26:32 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_calculcount(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**str;

	i = 0;
	count = 0;
	if (s[0] != c && s[0] != '\0')
		count++;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	count++;
	str = (char **)malloc(count * sizeof(char *));
	if (!str)
		return (NULL);
	return (str);
}

size_t	*ft_calculsize(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	*str;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[0] != c && s[0] != '\0')
			count++;
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	count++;
	str = (size_t *)malloc(count * sizeof(size_t));
	return (str);
}

size_t	*ft_calcul_nmb(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	*str;

	i = 0;
	j = 0;
	str = ft_calculsize(s, c);
	if (s[i] != '\0' && s[i] != c)
	{
		str[j] = i + 1;
		j++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
		{
			str[j] = i + 1;
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

size_t	ft_allo_size(char const *s, char c, size_t index, int flag)
{
	size_t	i;
	size_t	result;
	size_t	*j;

	i = 0;
	i = index;
	while (s[index] != '\0' && s[index] != c)
		index++;
	result = index - i;
	if (flag == 0)
		return (result);
	i = 0;
	j = ft_calcul_nmb(s, c);
	while (j[i] != '\0')
		i++;
	free(j);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	*j;
	size_t	n;
	size_t	index;
	char	**str;

	if (!s)
		return (NULL);
	str = ft_calculcount(s, c);
	if (str == NULL)
		return (NULL);
	j = ft_calcul_nmb(s, c);
	n = 0;
	if (s[0] != c && s[0] != '\0')
		str[n++] = ft_substr(s, 0, ft_allo_size(s, c, 0, 0));
	while (n < ft_allo_size(s, c, 0, 1))
	{
		index = j[n];
		str[n++] = ft_substr(s, index, ft_allo_size(s, c, index, 0));
	}
	str[n] = NULL;
	free(j);
	return (str);
}
/*
int	main(void)
{
	char		c;
	char		**str;
	size_t		i;

	char *s = "split";
	c = ' ';
	str = ft_split(s, c);
	i = 0;
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}  */