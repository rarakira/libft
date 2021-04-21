/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:42:24 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:43:50 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_memset()
{
	int m = 77;
	size_t n = 20;
	char *ptr = malloc(n);
	char *ptr_memset;

	printf("\nft_memset:\n");
	ptr_memset = ft_memset(ptr, m, n);
	printf("M: %c\n", ptr_memset[0]);
	for (size_t i = 0; i < n; i++)
	{
		if (ptr_memset[i] != m)
		{
			printf("Failed\n");
			break ;
		}
	}
	printf("Success\n\n");
	free(ptr);
}