/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:34:02 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/19 13:16:46 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	ch = (unsigned char)c;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
