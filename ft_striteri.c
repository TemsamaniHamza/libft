/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:32:55 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/06 17:33:00 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	to_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, (s + i));
		i++;
	}
}

/* int main(){
	char str[] = "hellow ww ";
	ft_striteri(str, to_upper);
	printf("%s", str);
	return (0);
}
 */