/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:06:56 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/23 14:19:32 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strlen()
{
	char	src1[] = "Hello";
	char	src2[] = "Beautiful World!";

	printf("\n*strlen*\n");
	printf("Src: %s\tlen = %zu\n", src1, strlen(src1));
	printf("Src: %s\tlen = %zu\n", src2, strlen(src2));
	printf("\n*ft_strlen*\n");
	printf("Src: %s\tlen = %zu\n", src1, ft_strlen(src1));
	printf("Src: %s\tlen = %zu\n", src2, ft_strlen(src2));
}

void	test2_strlen()
{
	char	src1[] = "11Hello1Beautiful1World11!1";
	char	src2[] = "1234567821";

	printf("\n*strlen*\n");
	printf("Src: %s\tlen = %zu\n", src1, strlen(src1));
	printf("Src: %s\tlen = %zu\n", src2, strlen(src2));
	printf("\n*ft_strlen*\n");
	printf("Src: %s\tlen = %zu\n", src1, ft_strlen(src1));
	printf("Src: %s\tlen = %zu\n", src2, ft_strlen(src2));
}

void	test_strlen()
{
	//test1_strlen();
	test2_strlen();
}
