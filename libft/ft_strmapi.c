/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:13:32 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 16:49:54 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies the function ’f’ to each character of the string ’s’ to create
a new string (with malloc) resulting from successive applications of ’f’. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr)
	{
		while (i < len)
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		ptr[len] = '\0';
	}
	return (ptr);
}
