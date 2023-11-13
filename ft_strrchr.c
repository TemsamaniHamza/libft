/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:33:31 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/10 20:33:37 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;
	char			ss;

	i = ft_strlen(s);
	str = (unsigned char *)s;
	ss = (char)c;
	if (str[i] == ss)
		return ((char *)&str[i]);
	while (i > 0)
	{
		if (str[i] == ss)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == ss)
		return ((char *)&str[i]);
	return (NULL);
}

/* int main(){
	const char s[] = "hello world";
	int c = 'l';
	printf("%s", ft_strrchr(s,c));
}  */
