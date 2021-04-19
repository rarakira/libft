/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 21:46:00 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/18 16:19:44 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

int	ft_strlen_multi(char **strs, int size)
{
	int	counter;
	int	w;
	int	c;

	counter = 0;
	w = 0;
	while (w < size)
	{
		c = 0;
		while (strs[w][c] != '\0')
		{
			counter++;
			c++;
		}
		w++;
	}
	return (counter);
}

void	ft_strpaste(char *dest, char **src, char *sep, int length)
{
	int			w;
	int			c;
	int			d;
	int			s;

	d = 0;
	w = 0;
	while (d < length)
	{
		c = 0;
		while (src[w][c] != '\0')
		{
			dest[d] = src[w][c];
			d++;
			c++;
		}
		s = 0;
		while (sep[s] != '\0' && d != length)
		{
			dest[d] = sep[s];
			d++;
			s++;
		}
		w++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*dest;
	int			length;

	length = ft_strlen_multi(strs, size) + (ft_strlen(sep) * (size - 1));
	dest = (char *)malloc(sizeof(char) * (length));
	if (dest == NULL)
		return (NULL);
	ft_strpaste(dest, strs, sep, length);
	return (dest);
}
