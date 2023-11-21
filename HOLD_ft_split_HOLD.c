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

//#include "libft.h"

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
	size_t		*j;
	size_t		count;
	size_t		n;
	size_t		index;
	char		**str;
	char const	*s;
	char		c;
	char		**result;
	size_t		i;
	size_t		count;
	char		**str;
	size_t		i;
	size_t		count;
	char		**str;

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
	s = " Hello, how are you?";
	c = ' ';
	result = ft_split(s, c);
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
/* #include "libft.h"

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

char	*ft_sub_split(size_t n, char **str, char const *s, char c)
{
	size_t	*j;
	size_t	index;

	j = ft_calcul_nmb(s, c);
	index = j[n];
	str[n] = (char *)malloc((ft_allo_size(s, c, index)) * sizeof(char));
	if (str[n] == NULL)
		return (NULL);
	str[n] = ft_substr(s, index, ft_allo_size(s, c, index));
}

char	**ft_split(char const *s, char c)
{
	size_t	*j;
	size_t	count;
	size_t	n;
	size_t	index;
	char	**str;

	str = ft_calculcount(s, c);
	j = ft_ca
static size_t	count_words(const char *s, char c)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (!flag && s[i] != c)
			flag = ++count;
		if (flag && s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static size_t	count_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**temp_inicializer(char ***strs, size_t *i, size_t *j, size_t wc)
{
	*strs = (char **)malloc((wc + 1) * sizeof(char *));
	*i = -1;
	*j = 0;
	return (*strs);
}

static char	**myfree(char **strs, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		free(strs[i++]);
	free (strs);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;
	char	**strs;

	if (!s)
		return (0);
	if (!temp_inicializer(&strs, &i, &j, count_words(s, c)))
		return (0);
	while (++i < count_words(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (!s[j])
			break ;
		word_len = count_word_len(&(s[j]), c);
		strs[i] = malloc((word_len + 1) * sizeof(char));
		if (!strs[i])
			return ((char **)myfree(strs, i));
		ft_strlcpy(strs[i], &(s[j]), word_len + 1);
		j += word_len;
	}
	strs[i] = 0;
	return (strs);
}lcul_nmb(s, c);
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
		str[n] = ft_sub_split(n, str, s, c);
		n++;
	}
	str[n] = NULL;
	return (str);
}

if (s[0] != c && s[0] != '\0')
	{
		index = 0;
		while (s[index] != c)
			index++;
		str[n] = (char *)malloc(index * sizeof(char));
		if (str[n] == NULL)
			return NULL;
		
	} */
/* int	main(void)
{
	char const	*s;
	char		c;
	char		**str;
	size_t		i;

	s = "   Hs s ell oWorld   ";
	c = ' ';
	str = ft_split(s, c);
	i = 0;
	while (str[i] != NULL)
		{
			printf("%s\n", str[i]);
			i++;
		}
	return (0);
}  */

/* 
static size_t	count_words(const char *s, char c)
{
	int	flag;
	int	i;
	int	count;

	flag = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (!flag && s[i] != c)
			flag = ++count;
		if (flag && s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static size_t	count_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**temp_inicializer(char ***strs, size_t *i, size_t *j, size_t wc)
{
	*strs = (char **)malloc((wc + 1) * sizeof(char *));
	*i = -1;
	*j = 0;
	return (*strs);
}

static char	**myfree(char **strs, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		free(strs[i++]);
	free (strs);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word_len;
	char	**strs;

	if (!s)
		return (0);
	if (!temp_inicializer(&strs, &i, &j, count_words(s, c)))
		return (0);
	while (++i < count_words(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		if (!s[j])
			break ;
		word_len = count_word_len(&(s[j]), c);
		strs[i] = malloc((word_len + 1) * sizeof(char));
		if (!strs[i])
			return ((char **)myfree(strs, i));
		ft_strlcpy(strs[i], &(s[j]), word_len + 1);
		j += word_len;
	}
	strs[i] = 0;
	return (strs);
} */

#include "libft.h"
/* 
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

char	**ft_split(const char *s, char c)
{
	size_t i = 0;
	char 	**str;
	size_t j = 0;
	size_t n = 0;
	str = ft_calculcount(s,c);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			while (s[i + j] != '\0' && s[i + j + 1] != c)
				j++;
			str[n] = ft_substr(s, i, j);
			printf("PRINTED  ");
			n++;
			i = i + j;
			j = 0;
		}
		i++;
	}
	str[n] = NULL;
	return (str);
}

int main()
{
	char *s = "HELLO MATE HOW ARE YOU";
	char c = ' ';
	char **result = ft_split(s,c);
	size_t i = 0;
	while (result[i] != NULL)
	{
		printf("%s", result[i]);
		i++;
	}
	return (0);
} */