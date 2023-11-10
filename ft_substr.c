/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:21 by htemsama          #+#    #+#             */
/*   Updated: 2023/10/30 16:20:45 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ((char *)malloc(len * sizeof(char)));
	if (str == NULL)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}

/* int main(){
	char const *s = "Hello world!";
	unsigned int start = 2;
	size_t len = 5;
	printf("%s\n",ft_substr(s,start,len));
}
 */