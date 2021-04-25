/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:50:16 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 16:03:57 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_itoa()
{
	int	n1 = -100;
	int n2 = 18765437;
	int n3 = -18765437;
	int n4 = 2147483647;
	int n5 = 0;

	printf("\n\n* ft_itoa *\n");
	printf("%d\t\t= %s\n", n1, ft_itoa(n1));
	printf("%d\t= %s\n", n2, ft_itoa(n2));
	printf("%d\t= %s\n", n3, ft_itoa(n3));
	printf("%d\t= %s\n", n4, ft_itoa(n4));
	printf("%d\t\t= %s\n", n5, ft_itoa(n5));
}
