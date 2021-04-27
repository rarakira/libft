/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 21:16:11 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/27 14:09:42 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_putnbr_fd()
{
	int	a = 0;
	int b = -1234567;
	int c = -2147483648;

	printf("\n\n* ft_putnbr_fd *\n");
	printf("\n%d:\n", a);
	ft_putnbr_fd(a, 1);
	printf("\n");
	printf("\n%d:\n", b);
	ft_putnbr_fd(b, 1);
	printf("\n");
	printf("\n%d:\n", c);
	ft_putnbr_fd(c, 1);
	printf("\n");
	
}
