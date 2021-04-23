/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:40:43 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 19:10:15 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"


void	test1_bzero()
{
	size_t n = 20;
	char *ptr = malloc(n);

	printf("\n* ft_bzero *\n");
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

void	test2_bzero()
{
	size_t n = 20;
	char str[20];

	printf("\n* ft_bzero *\n\nFor str = 20, n = 10\n");
	for (size_t i = 0; i < 20; i++)
	{
		str[i] = i;
	}
	ft_bzero(str, 10);
	for (size_t i = 0; i < n; i++)
	{
		printf("%zu = %d\n", i, (int)str[i]);
	}
}

void	test3_bzero()
{
	size_t n = 20;
	char str[20];

	printf("\n* bzero *\n\nFor str = 20, n = 10\n");
	for (size_t i = 0; i < 20; i++)
	{
		str[i] = i;
	}
	bzero(str, 10);
	for (size_t i = 0; i < n; i++)
	{
		printf("%zu = %d\n", i, (int)str[i]);
	}
}

void	test_bzero()
{
	test1_bzero();
	test2_bzero();
	test3_bzero();
}
