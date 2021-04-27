/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:49:17 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/27 13:21:40 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_substr()
{
	char		*new_str;
	const char	src[] = "Hello Brave New World.";
	const char	src_num[] = "1234567890";

	printf("\nft_substr:\n");
	new_str = ft_substr(src, 6, 5);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

	new_str = ft_substr(src, 6, 50);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

	new_str = ft_substr(src, 50, 5);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

	new_str = ft_substr(src_num, 5, 5);
	printf("Old: %s\nNew: %s\n\n", src_num, new_str);
	free(new_str);

	new_str = ft_substr(src_num, 1, 40);
	printf("Old: %s\nNew: %s\n\n", src_num, new_str);
	free(new_str);
}

void test2_substr()
{
	char		*new_str;
	const char	src[] = "01234";
	size_t size = 10;

	printf("\nft_substr:\n");
	new_str = ft_substr(src, 10, size);
	printf("Old: %s\nNew: %s\n\n", src, new_str);
	free(new_str);

}

void test_substr()
{
	test1_substr();
	test2_substr();
}
