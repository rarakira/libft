/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:44:25 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:44:37 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_memcpy()
{
	char *hello = "Hello world!";
	size_t n = 20;
	char *ptr = malloc(n);
	char *ptr_memcpy;

	printf("\nft_memcpy:\n");
	ptr_memcpy = ft_memcpy(ptr, hello, 5);
	printf("%s\n", ptr_memcpy);
	printf("Success\n");
	free(ptr);

	char a[] = "Firststring";
	const char b[] = "Secondstring";
	memcpy(a, b, 5);
	printf("New arrays : %s\t%s\n", a, b);
}