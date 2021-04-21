/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:52:29 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:52:38 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strncmp()
{
	const char	src_1[] = "Hello World!";
	const char	src_2[] = "Hello Patrick!";
	int n = 5;

	printf("\nstrncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, strncmp(src_1, src_2, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, ft_strncmp(src_1, src_2, n));

	n = 15;

	printf("\nstrncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2, strncmp(src_1, src_2, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_1, src_2,
	ft_strncmp(src_1, src_2, n));

	printf("\nstrncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, strncmp(src_2, src_1, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in %s & %s are %d\n", n, src_2, src_1, ft_strncmp(src_2, src_1, n));

	printf("\nstrncmp:\n");
	printf("First %d letters in \"aaa\" & %s are %d\n", n, src_1, strncmp("aaa", src_1, n));

	printf("\nft_strncmp:\n");
	printf("First %d letters in \"aaa\" & %s are %d\n", n, src_1, ft_strncmp("aaa", src_1, n));
}