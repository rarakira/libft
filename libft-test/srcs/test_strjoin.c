/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:50:44 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/28 22:38:17 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_strjoin()
{
	char		*new_str;
	const char	src_1[] = "Hello ";
	const char	src_2[] = "World!";

	printf("\nft_strjoin:\n");
	new_str = ft_strjoin(src_1, src_2);
	printf("Old: %s & %s\nNew: %s\n\n", src_1, src_2, new_str);
	free(new_str);

	const char	src_3[] = "12345";
	const char	src_4[] = "6789 10";

	new_str = ft_strjoin(src_3, src_4);
	printf("Old: %s & %s\nNew: %s\n\n", src_3, src_4, new_str);
	free(new_str);

	new_str = ft_strjoin(src_4, src_3);
	printf("Old: %s & %s\nNew: %s\n\n", src_4, src_3, new_str);
	free(new_str);

	new_str = ft_strjoin(NULL, src_3);
	printf("Old: %s & %s\nNew: %s\n\n", NULL, src_3, new_str);
	free(new_str);

	new_str = ft_strjoin(src_4, NULL);
	printf("Old: %s & %s\nNew: %s\n\n", src_4, NULL, new_str);
	free(new_str);

	new_str = ft_strjoin(NULL, NULL);
	printf("Old: %s & %s\nNew: %s\n\n", NULL, NULL, new_str);
	free(new_str);
}
