/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:44:25 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/26 10:58:09 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_memcpy()
{
	char *src = "Hello world!";
	char dst1[20];
	char dst2[20];
	size_t	n = 5;

	printf("\n*** Test 1 ***\n");
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
	size_t	n = 4;

	printf("\n*** Test 2 ***\n");
	printf("\n*memcpy*\n");
	printf("Source: %s\n", src1);
	printf("Destination: %s\nCopied %zu chars\n\n", memcpy(dst1, src1, n), n);

	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", src1);
	printf("Destination: %s\nCopied %zu chars\n\n",
	ft_memcpy(dst2, src1, n), n);

}

void	test3_memcpy()
{
	char *src = "Hello world!";
	char dst1[100];
	char dst2[100];
	size_t	n = 100;

	printf("\n*** Test 3 ***\n");
	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\nCopied %zu chars\n\n", ft_memcpy(dst1, src, n), n);

	printf("\n*memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\nCopied %zu chars\n\n", memcpy(dst2, src, n), n);
}

void	test4_memcpy()
{
	size_t	n = 5;

	printf("\n*** Test 4 ***\n");
	printf("\n*memcpy*\n");
	printf("Source: %s\n", NULL);
	printf("Destination: %s\n\n", memcpy(NULL, NULL, n));
	
	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", NULL);
	printf("Destination: %s\n\n", ft_memcpy(NULL, NULL, n));
}

void	test5_memcpy()
{
	char *src = "Hello world!";
	size_t	n = 5;

	printf("\n*** Test 5 ***\n");
	printf("\n*memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n\n", memcpy(NULL, src, n));
	
	printf("\n*ft_memcpy*\n");
	printf("Source: %s\n", src);
	printf("Destination: %s\n\n", ft_memcpy(NULL, src, n));
}


void	test_memcpy()
{
	test1_memcpy();
	test2_memcpy();
	test3_memcpy(); // check what goes wrong
	test4_memcpy();
	test5_memcpy();
}
