/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:53:43 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:54:19 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_memcmp()
{
	const char	src_1[] = "Hello World!";
	const char	src_2[] = "Hello Patrick!";
	const char	src_3[] = "Hello Patrick!";
	int n = 5;

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, memcmp(src_1, src_2, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_memcmp(src_1, src_2, n));

	n = 15;

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, memcmp(src_1, src_2, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_memcmp(src_1, src_2, n));

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, memcmp(src_2, src_1, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, ft_memcmp(src_2, src_1, n));

	printf("\nmemcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_3, memcmp(src_2, src_3, n));

	printf("\nft_memcmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_3, ft_memcmp(src_2, src_3, n));
}