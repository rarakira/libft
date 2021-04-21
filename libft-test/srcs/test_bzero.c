/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:40:43 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:41:32 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_bzero()
{
	size_t n = 20;
	char *ptr = malloc(n);

	printf("\nft_bzero:\n");
	ft_bzero(ptr, n);
	for (size_t i = 0; i < n; i++)
	{
		if (ptr[i] != '\0')
		{
			printf("Failed\n");
			break ;
		}
	}
	printf("Success\n\n");
	free(ptr);
}