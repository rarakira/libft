/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 21:02:44 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/23 10:03:46 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strdup()
{
	char	*ptr;
	char	src[] = "Hello World";

	printf("\n\n* ft_strdup *\n");
	ptr = ft_strdup(src);
	printf("Old line: %s\n", src);
	printf("New line: %s\n", ptr);
	free(ptr);
	printf("\n\n");
}

void	test2_strdup()
{
	char	*ptr;
	char	src[] = "Hello World";

	printf("\n\n* strdup *\n");
	ptr = strdup(src);
	printf("Old line: %s\n", src);
	printf("New line: %s\n", ptr);
	free(ptr);
	printf("\n\n");
}

void	test_strdup()
{
	test1_strdup();
	test2_strdup();
}
