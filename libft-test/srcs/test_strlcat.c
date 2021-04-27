/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:50:48 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/27 11:22:19 by lbaela           ###   ########.fr       */
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
	printf("Concatstring is %zu\nResult string: %s\n\n", strlcat(dest_1, src_2, n_1), dest_1);
	printf("\n*ft_strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Concatstring is %zu\nResult string: %s\n\n", ft_strlcat(dest_2, src_2, n_1), dest_2);
}


void	test2_strlcat()
{
    char *src_2 = "the cake is a lie !\0I'm hidden lol\r\n";
    char dest_1[0xF00] = "there is no stars in the sky";
    char dest_2[0xF00] = "there is no stars in the sky";
    size_t n_1 = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");

	printf("\n*strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_1, src_2);
	printf("Concatstring is %zu\nResult string: %s\n\n", strlcat(dest_1, src_2, n_1), dest_1);

	printf("\n\n*ft_strlcat*\n");
	printf("Dst_size is %zu\nDst: %s\nSrs: %s\n", n_1, dest_2, src_2);
	printf("Concatstring is %zu\nResult string: %s\n\n", ft_strlcat(dest_2, src_2, n_1), dest_2);
/*
    //__builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
	strlcat(buff1, str, max);
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
            printf("Success!\n");
	else
		printf("Failed\n");
*/
}

void	test_strlcat()
{
	test1_strlcat();
	test2_strlcat();
}
