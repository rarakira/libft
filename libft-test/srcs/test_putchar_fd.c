/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:02:00 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 20:57:29 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_putchar_fd()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';


	printf("\n\n* ft_putchar_fd *\n");
	ft_putchar_fd(a, 1);
	printf("\n");
	ft_putchar_fd(b, 1);
	printf("\n");
	ft_putchar_fd(c, 1);
	printf("\n");

}
