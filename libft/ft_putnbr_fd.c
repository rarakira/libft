/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 21:08:37 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 21:48:06 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the integer ’n’ to the given file descriptor. */
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	len;
	long int		mod;
	char			ch;

	mod = 10;
	len = 1;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n % mod != n)
	{
		mod *= 10;
		len++;
	}
	while (mod >= 10)
	{
		mod /= 10;
		ch = (n / mod) + '0';
		n = n % mod;
		write(fd, &ch, 1);
	}
}
