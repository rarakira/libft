/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:25:57 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 21:36:23 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

/* ft_memchr */
void	test1_memchr()
{
	const char	src_1[] = "Hello World";
	const char	src_2[] = "No search symbol";
	int	letter = 87;

	printf("\nft_memchr:\n");
	printf("String: %s\n%c found: %s\n\n", src_1, letter, (char *)ft_memchr(src_1, letter, 10));

	printf("\nmemchr:\n");
	printf("String: %s\n%c found: %s\n\n", src_1, letter, (char *)memchr(src_1, letter, 10));

	printf("\nft_memchr:\n");
	printf("String: %s\n%c not found: %s\n\n", src_2, letter, (char *)ft_memchr(src_2, letter, 10));

	printf("\nmemchr:\n");
	printf("String: %s\n%c not found: %s\n\n", src_2, letter, (char *)memchr(src_2, letter, 10));
}

void	test2_memchr()
{
	const char	src_2[] = "No search symbol";
	int	letter = 87;

	printf("\nft_memchr:\n");
	printf("String: %s\n%c not found: %s\n\n", src_2, letter, (char *)ft_memchr(src_2, letter, 170));

	printf("\nmemchr:\n");
	printf("String: %s\n%c not found: %s\n\n", src_2, letter, (char *)memchr(src_2, letter, 170));
}

void	test_memchr()
{
	test1_memchr();
    test2_memchr();
}