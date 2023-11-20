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

size_t	*ft_calcul_nmb(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	*str;
	size_t	t;

	i = 0;
	j = 0;
	str = (size_t *)ft_calculcount(s, c);
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
	str[j] != '\0';
	t = 0;
	return (str);
}

size_t	ft_allo_size(char const *s, char c, size_t index)
{
	size_t	i;
	size_t	result;
	char	*str;

	i = 0;
	i = index;
	while (s[index] != '\0' && s[index] != c)
		index++;
	result = index - i;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	*j;
	size_t	count;
	size_t	n;
	size_t	index;
	char	**str;

	str = ft_calculcount(s, c);
	j = ft_calcul_nmb(s, c);
	count = 0;
	while (j[count] != '\0')
		count++;
	n = 0;
	if (s[0] != c && s[0] != '\0')
	{
		index = 0;
		str[n] = (char *)malloc((ft_allo_size(s, c, index)) * sizeof(char));
		if (str[n] == NULL)
			return (NULL);
		str[n] = ft_substr(s, index, ft_allo_size(s, c, index));
		n++;
	}
	while (n < count)
	{
		index = j[n];
		str[n] = (char *)malloc((ft_allo_size(s, c, index)) * sizeof(char));
		if (str[n] == NULL)
			return (NULL);
		str[n] = ft_substr(s, index, ft_allo_size(s, c, index));
		n++;
	}
	str[n] = NULL;
	return (str);
}

/* int	main(void)
{
	char const	*s;
	char		c;
	char		**str;
	size_t		i;

	s = "Hss ell oWorld";
	c = ' ';
	str = ft_split(s, c);
	i = 0;
	while (str[i] != NULL)
		{
			printf("%s\n", str[i]);
			i++;
		}
	return (0);
}
 */