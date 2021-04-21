/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:02:19 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/20 12:52:07 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new_str;
	unsigned int	s1_len;
	unsigned int	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_str == NULL)
		return (new_str);
	new_str = (char *)ft_memcpy(new_str, s1, s1_len);
	ft_memcpy((new_str + s1_len), s2, s2_len);
	new_str[s1_len + s2_len] = '\0';
	return (new_str);
}