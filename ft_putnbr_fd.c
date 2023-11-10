/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htemsama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:42:27 by htemsama          #+#    #+#             */
/*   Updated: 2023/11/06 18:42:30 by htemsama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c[10];
	int		i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	while (nbr > 9)
	{
		c[i] = (nbr % 10) + '0';
		nbr = (nbr / 10);
		i++;
	}
	c[i] = nbr + '0';
	while (i >= 0)
	{
		write(fd, &c[i], 1);
		i--;
	}
}

/*
int	main(void){
	int n = 42159;
	int fd = 1;
	ft_putnbr_fd(n,fd);
} */