/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:10:47 by glaguyon          #+#    #+#             */
/*   Updated: 2023/11/05 20:07:07 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_nbr(char *tmp, short neg, int fd)
{
	size_t	i;
	char	c;
	char	toprint[11];

	i = 0;
	if (neg)
	{
		i++;
		toprint[0] = '-';
	}
	c = *(tmp - i);
	while (c)
	{
		toprint[i] = c;
		i++;
		c = *(tmp - i);
	}
	write(fd, toprint, i);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t			numlen;
	unsigned int	num;
	char			tmp[11];
	short			neg;

	neg = 0;
	num = n;
	if (n < 0)
	{
		neg = 1;
		num = -n;
	}
	*tmp = '\0';
	numlen = 1;
	while (num || numlen == 1)
	{
		tmp[numlen] = num % 10 + '0';
		num /= 10;
		numlen++;
	}
	ft_print_nbr(tmp + numlen + neg - 1, neg, fd);
}
