/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:44:25 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 11:33:31 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_memcpy()
{
	char *src = "Hello world!";
	char dst1[20];
	char dst2[20];
	size_t	n = 5;

	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\nCopied %zu chars\n\n", ft_memcpy(dst1, src, n), n);

	printf("\n*memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\nCopied %zu chars\n\n", memcpy(dst2, src, n), n);
}

void	test2_memcpy()
{
	char *src1 = "Hello world!";
	char dst1[5];
	char dst2[5];

	printf("\n*memcpy*\n");
	printf("Source: %s\n", src1);
	printf("Destination: %s\nCopied %zu chars\n\n", memcpy(dst1, src1, sizeof(dst1)), sizeof(dst1));

	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", src1);
	printf("Destination: %s\nCopied %zu chars\n\n",
	ft_memcpy(dst2, src1, sizeof(dst2)), sizeof(dst2));

}

void	test3_memcpy()
{
	char *src = "Hello world!";
	char dst1[100];
	char dst2[100];
	size_t	n = 100;

	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\nCopied %zu chars\n\n", ft_memcpy(dst1, src, n), n);

	printf("\n*memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\nCopied %zu chars\n\n", memcpy(dst2, src, n), n);
}


void	test_memcpy()
{
	test1_memcpy();
	test3_memcpy(); // check what goes wrong
	test2_memcpy();
}
