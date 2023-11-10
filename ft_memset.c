/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:16:43 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 12:16:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	uc;

	i = 0;
	str = s;
	uc = (unsigned char)c;
	while (i < n)
	{
		str[i] = uc;
		i++;
	}
	return (s);
}

/* void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	byte;
	unsigned char	*ptr;

	byte = c;
	ptr = s;
	i = 0;
	byte = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = byte;
		i++;
	}
	return (s);
}
 */
/* int main() {
	// Example usage of ft_memset
	char buffer[20] = "Hello, World!";
	char bufer[20] = "Hello, World!";

	ft_memset(buffer + 10, 'X', 5);
	printf("Modified String: %s\n", buffer); // Output: "XXXXX, World!"
	memset(bufer + 10, 'X', 5);
	printf("Modified String: %s\n", bufer); // Output: "XXXXX, World!"
	return (0);
} */