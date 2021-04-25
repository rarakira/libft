/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:09:06 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 14:34:48 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	issep(char const *s, char c)
{
	unsigned int	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == c)
			count++;
		else
			return (count);
	}
	return (count);
}

static unsigned int	count_strings (char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;
	size_t			len;

	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i += issep(s + i, c);
			count++;
		}
		else
			i++;
	}
	len = ft_strlen(s);
	if (s[0] == c)
		count--;
	if (s[len - 1] == c && count > 1)
		count--;
	return (count);
}

static char	*create_str(char **str, char c)
{
	size_t	count;
	char	*ptr;

	count = 0;
	while (**str == c)
		*str = (*str + 1);
	while (((*str)[count] != c) && ((*str)[count] != '\0'))
		count++;
	printf("String: %s, length: %zu\n", *str, count);
	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (ptr)
	{
		ft_memcpy(ptr, *str, count);
		ptr[count] = '\0';
		*str = (*str + count);
	}
	return (ptr);
}

static void	free_all(char **ptr, unsigned int i, unsigned int n_str)
{
	(void) ptr;
	(void) i;
	(void) n_str;
}

/* Allocates (with malloc) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter. The array must be ended
by a NULL pointer. */
char	**ft_split(char const *s, char c)
{
	unsigned int	n_str;
	unsigned int	i;
	char			*str;
	char			**ptr;

	n_str = count_strings(s, c);
	ptr = (char **)malloc(sizeof(char *) * (n_str + 1));
	if (!ptr)
		return (NULL);
	ptr[n_str] = NULL;
	i = 0;
	str = (char *)s;
	while (i < n_str)
	{
		ptr[i] = create_str(&str, c);
		if (!ptr[i])
		{
			free_all(ptr, i, n_str);
			return (NULL);
		}
		i++;
	}
	return (ptr);
}