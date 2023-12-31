/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:57:09 by glaguyon          #+#    #+#             */
/*   Updated: 2023/11/05 20:35:41 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	char	c;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	c = *s;
	while (c)
	{
		f(i, s + i);
		i++;
		c = s[i];
	}
}
