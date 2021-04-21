/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:14:20 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:24:19 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			srcsize;
	size_t			i;
	unsigned char	ch;
	char			*ptr;

	ch = (unsigned char)c;
	srcsize = ft_strlen(s);
	i = 0;
	ptr = NULL;
	while (i <= srcsize)
	{
		if (s[i] == ch)
			ptr = (char *)s + i;
		i++;
	}
	return (ptr);
}
