/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:11:37 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:22:32 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned int	i;

	ch = (unsigned char)c;
	i = 0;
	while (i <= n)
	{
		if (((const char *)s)[i] == ch)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
