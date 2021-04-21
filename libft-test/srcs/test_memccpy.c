/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:46:21 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:46:49 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_memccpy()
{
	char a[] = "123456789012345";
	const char b[] = "Secondstring";
	char c[] = "123456789012345";
	const char d[] = "Secondstring";
    
	printf("\n* memccpy *\n %s\n", memccpy(a, b, 115, 5));
	printf("New arrays : %s\t%s\n", a, b);
	printf("\n* ft_memccpy *\n %s\n", ft_memccpy(c, d, 115, 5));
	printf("New arrays : %s\t%s\n", c, d);
	printf("\n* memccpy *\n %s\n", memccpy(a, b, 115, 10));
	printf("New arrays : %s\t%s\n", a, b);
	printf("\n* ft_memccpy *\n %s\n", ft_memccpy(c, d, 115, 10));
	printf("New arrays : %s\t%s\n", c, d);
}