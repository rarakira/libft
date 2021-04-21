/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:50:48 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 16:56:55 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strlcat()
{
	char	dest_1[13] = "Hello ";
	char	dest_2[13] = "Hello ";
	char	src_2[] = "World!";
	size_t n_1 = 13;

	printf("\n*strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcat(dest_1, src_2, n_1), dest_1);
	printf("\n*ft_strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcat(dest_2, src_2, n_1), dest_2);
}

void	test2_strlcat()
{
	char	dest_1[13] = "Hello ";
	char	dest_2[13] = "Hello ";
	char	src_2[] = "Beautiful World!";
	size_t n_1 = 13;

	printf("\n*strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcat(dest_1, src_2, n_1), dest_1);
	printf("\n*ft_strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcat(dest_2, src_2, n_1), dest_2);
}

void	test_strlcat()
{
	test1_strlcat();
	test2_strlcat();
}
