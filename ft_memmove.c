/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:04:46 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/19 18:01:53 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		printf("src[%d] = %p\tdst[0] = %p\n", i, ((unsigned char *)src + i), ((unsigned char *)dst));
		if (((unsigned char *)src + i) == ((unsigned char *)dst))
		{
			while (--len >= 0)
			{
				len--;
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
			}
			return (dst);
		}
		else
			i++;
	}
	return (ft_memcpy(dst, src, len));
}
