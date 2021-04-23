/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:11:16 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/23 13:05:16 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strtrim()
{
	const char str1[] = "123Hello11123";
	const char set[] = "123";
	char	*ptr;

	printf("\n\n* ft_strtrim *\n");
	printf("Original string: %s\tset: %s\n", str1, set);
	ptr = ft_strtrim(str1, set);
	printf("Trimmed string: %s\n", ptr);
	free(ptr);
}

void	test2_strtrim()
{
	const char str1[] = "1234123123123411123";
	const char set[] = "123";
	char	*ptr;

	printf("\n\n* ft_strtrim *\n");
	printf("Original string: %s\tset: %s\n", str1, set);
	ptr = ft_strtrim(str1, set);
	printf("Trimmed string: %s\n", ptr);
	free(ptr);
}

void	test3_strtrim()
{
	const char str1[] = "11111111";
	const char set[] = "123";
	char	*ptr;

	printf("\n\n* ft_strtrim *\n");
	printf("Original string: %s\tset: %s\n", str1, set);
	ptr = ft_strtrim(str1, set);
	printf("Trimmed string: %s\n", ptr);
	free(ptr);
}

void	test_strtrim()
{
	test1_strtrim();
	test2_strtrim();
	test3_strtrim();
}
