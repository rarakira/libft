/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:44:14 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 11:27:28 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Locates the first occurrence of the null-terminated string in the src string
where not more than len characters are searched. Characters that appear after a
`\0' are not searched. */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;
	char	*ptr;

	n_len = ft_strlen(needle);
	i = 0;
	ptr = NULL;
	while ((len - i) >= n_len && !ptr)
	{
		if (!ft_strncmp(haystack + i, needle, n_len))
			ptr = (char *)(haystack + i);
		i++;
	}
	return (ptr);
}
