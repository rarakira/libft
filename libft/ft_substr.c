/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:59:46 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 09:35:09 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	src_len;
	char			*dest;

	src_len = (unsigned int)ft_strlen(s);
	if (start > src_len)
		return (NULL);
	if ((src_len - start) < len)
		len = src_len - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (dest);
	dest = (char *)ft_memcpy(dest, (s + start), len);
	dest[len] = '\0';
	return (dest);
}
