/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 12:24:40 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/19 12:08:41 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strlen(char *str);

#endif