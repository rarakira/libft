/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:17:24 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 13:20:11 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strlcpy()
{
	char	dest_1[] = "Hello World!";
	char	dest_2[] = "Hello World!";
	char	src_2[] = "0123456";
	size_t n_1 = 12;

	printf("\n*strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcpy(dest_1, src_2, n_1), dest_1);
	printf("\n*ft_strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcpy(dest_2, src_2, n_1), dest_2);
}

void	test2_strlcpy()
{
	char	dest_1[] = "0123456";
	char	dest_2[] = "0123456";
	char	src_2[] = "987654321000";
	size_t n_1 = 7;

	printf("\n*strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcpy(dest_1, src_2, n_1), dest_1);
	printf("\n*ft_strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcpy(dest_2, src_2, n_1), dest_2);
}

void	test3_strlcpy()
{
	char	dest_1[] = "0123456";
	char	dest_2[] = "0123456";
	char	src_2[] = "9876543";
	size_t n_1 = 0;
	size_t n_2 = 1;
	size_t n_3 = 7;

	printf("\n*strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcpy(dest_1, src_2, n_1), dest_1);
	printf("\n*ft_strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcpy(dest_2, src_2, n_1), dest_2);

	printf("\n*strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_2, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcpy(dest_1, src_2, n_2), dest_1);
	printf("\n*ft_strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_2, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcpy(dest_2, src_2, n_2), dest_2);

	printf("\n*strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_3, dest_1, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", strlcpy(dest_1, src_2, n_3), dest_1);
	printf("\n*ft_strlcpy*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_3, dest_2, src_2);
	printf("Src_size is %zu\nResult string: %s\n\n", ft_strlcpy(dest_2, src_2, n_3), dest_2);
}

void	test_strlcpy()
{
	test1_strlcpy();
    test2_strlcpy();
    test3_strlcpy();
}
