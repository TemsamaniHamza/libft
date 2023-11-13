/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:16:16 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/05 23:16:18 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* int	ft_calcul_len(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	i -= count;
	return (i);
}

int	ft_calculcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

size_t	*ft_calcul_nmb(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	j;
	size_t	*str;

	i = 0;
	count = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	str = (size_t *)malloc((count + 1) * sizeof(size_t));
	if (!str)
		return (NULL);
	i = 0;
	if (s[0] != c)
	{
		while (s[i] != '\0' && s[i] != c)
		{
			str[j] = i + 1;
			j++;
		}
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
	return (str);
}

size_t	ft_allo_size(char const *s, char c, size_t index)
{
	size_t	i;
	size_t	k;
	size_t	result;
	char	*str;

	i = index;
	k = 0;
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

	j = ft_calcul_nmb(s, c);
	count = ft_calculcount(s, c);
	n = 0;
	str = (char **)malloc((ft_calcul_len(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (n < count)
	{
		index = j[n];
		str[n] = (char *)malloc((ft_allo_size(s, c, index)) * sizeof(char));
		if (str[n] == NULL)
			return (NULL);
		str[n] = ft_substr(s, index, ft_allo_size(s, c, index));
		n++;
	}
	return (str);
} */

/* int main() {
	char const *s = " Hello, how are you?";
	char c = ' ';
	char **result = ft_split(s, c);

	// Print the result
	for (size_t i = 0; result[i] != NULL; i++) {
		printf("%s\n", result[i]);
	}

	// Free the memory
	for (size_t i = 0; result[i] != NULL; i++) {
		free(result[i]);
	}
	free(result);

	return (0);
} */