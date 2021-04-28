/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:44:14 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/28 22:41:26 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Function locates the first occurrence of 'needle' string in the
'haystack' string in the 'len' characters.

Characters that appear after a `\0' character are not searched. */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;
	char	*ptr;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	n_len = ft_strlen(needle);
	i = 0;
	ptr = NULL;
	while ((len - i) >= n_len && !ptr)
	{
		if (!ft_strncmp(haystack + i, needle, n_len))
			ptr = (char *)(haystack + i);
		if (haystack[i] == '\0')
			break ;
		i++;
	}
	return (ptr);
}
