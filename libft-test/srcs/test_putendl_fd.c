/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 21:15:34 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 21:31:00 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_putendl_fd()
{
	char a[] = "Hello world!";
	char b[] = "1 2 3 4 5 6 7 8 9 10";

	printf("\n\n* ft_putendl_fd *\n");
	ft_putendl_fd(a, 1);
	printf("\n");
	ft_putendl_fd(b, 1);
	printf("\n");

}
