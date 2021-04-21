/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:47:51 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:48:00 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_memmove()
{
	char d[] = "1234567890";
	char s[] = "abcdefghij";
	printf("\n* memmove *\nOld: %s\n", d);
	memmove(d, s, 5);
	printf("New: %s\n", d);

	char ft_d[] = "1234567890";
	char ft_s[] = "abcdefghij";
	printf("\n* ft_memmove *\nOld: %s\n", ft_d);
	ft_memmove(ft_d, ft_s, 5);
	printf("New: %s\n", ft_d);

	printf("\n* memmove *\nOld: %s\n", d);
	memmove(d, (d + 3), 5);
	printf("New: %s\n", d);

	printf("\n* ft_memmove *\nOld: %s\n", ft_d);
	ft_memmove(ft_d, (ft_d + 3), 5);
	printf("New: %s\n", ft_d);

	printf("\n* memmove *\nOld: %s\n", s);
	memmove((s + 3), s, 5);
	printf("New: %s\n", s);

	printf("\n* ft_memmove *\nOld: %s\n", ft_s);
	ft_memmove((ft_s + 3), ft_s, 5);
	printf("New: %s\n", ft_s);
}