/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:42:22 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/23 10:35:05 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_calloc()
{
	char	*ptr;
	size_t	size = sizeof(long int);
	size_t	length = 2;

	printf("\n\n* ft_calloc *\n");
	ptr = ft_calloc(length, size);
	for (size_t i = 0; i <= (length * size); i++)
	{
		printf("%d", ptr[i]);
	}
	free(ptr);

	printf("\n\n* calloc *\n");
	ptr = calloc(length, size);
	for (size_t i = 0; i <= (length * size); i++)
	{
		printf("%d", ptr[i]);
	}
	free(ptr);
	printf("\n\n");
}

void	test2_calloc()
{
	char	*ptr;
	size_t	size = sizeof(char);
	size_t	length = 5;

	printf("\n\n* calloc *\n");
	ptr = calloc(length, size);
	for (size_t i = 0; i <= 150; i++)
	{
		printf("%d", (int)ptr[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i <= (length * size * 5); i++)
	{
		ptr[i] = i;
		printf("%d", (int)ptr[i]);
	}
	free(ptr);
	printf("\n\n");

	printf("\n\n* ft_calloc *\n");
	ptr = ft_calloc(length, size);
	for (size_t i = 0; i <= 150; i++)
	{
		printf("%d", (int)ptr[i]);
	}
	printf("\n\n");
	for (size_t i = 0; i <= (length * size * 5); i++)
	{
		ptr[i] = i;
		printf("%d", (int)ptr[i]);
	}
	free(ptr);

	printf("\n\n* calloc *\n");
	ptr = calloc(length, size);
	for (size_t i = 0; i <= 150; i++)
	{
		printf("%d", (int)ptr[i]);
	}
	free(ptr);
	printf("\n\n");
}
void	test_calloc()
{
	test1_calloc();
	//test2_calloc();
	//sleep(10000);
}
