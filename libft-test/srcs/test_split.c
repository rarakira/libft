/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:34:30 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 14:31:10 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	print_and_free(char **ptr)
{
	int i = 0;
	while (ptr[i])
	{
		printf("Substring[%d]: %s\n", i, ptr[i]);
		i++;
	}
	printf("\nEnd of strings\n\n");
	i = 0;
	while (ptr[i])
	{
		free(ptr[i++]);
	}
	free(ptr);
	printf("\n");
}

void	test1_split()
{
	const char str1[] = "11Hello1Beautiful1World11!1";
	char sep = '1';
	char	**ptr;

	printf("\n\n* ft_split: test 1 *\n");
	printf("Original string: %s\tset: %c\n", str1, sep);
	ptr = ft_split(str1, sep);
	printf("\n");

	print_and_free(ptr);
}

void	test2_split()
{
	const char str2[] = "11Hello1Beautiful1World11!";
	char sep = '1';
	char	**ptr;

	printf("\n\n* ft_split: test 2 *\n");
	printf("Original string: %s\tset: %c\n", str2, sep);
	ptr = ft_split(str2, sep);
	printf("\n");

	print_and_free(ptr);
}

void	test3_split()
{
	const char str3[] = "Hello1Beautiful1World11!1";
	char sep = '1';
	char	**ptr;

	printf("\n\n* ft_split: test 3 *\n");
	printf("Original string: %s\tset: %c\n", str3, sep);
	ptr = ft_split(str3, sep);
	printf("\n");

	print_and_free(ptr);
}

void	test4_split()
{
	const char str4[] = "1111111111";
	char sep = '1';
	char	**ptr;

	printf("\n\n* ft_split: test 4 *\n");
	printf("Original string: %s\tset: %c\n", str4, sep);
	ptr = ft_split(str4, sep);
	printf("\n");

	print_and_free(ptr);
}

void	test5_split()
{
	const char str4[] = "111Hello11";
	char sep = '1';
	char	**ptr;

	printf("\n\n* ft_split: test 5 *\n");
	printf("Original string: %s\tset: %c\n", str4, sep);
	ptr = ft_split(str4, sep);
	printf("\n");

	print_and_free(ptr);
}

void	test6_split()
{
	const char str4[] = "ccAaaacBbbbcccDd";
	char sep = 'c';
	char	**ptr;

	printf("\n\n* ft_split: test 5 *\n");
	printf("Original string: %s\tset: %c\n", str4, sep);
	ptr = ft_split(str4, sep);
	printf("\n");

	print_and_free(ptr);
}

void	test_split()
{
	test1_split();
	test2_split();
	test3_split();
	test4_split();
	test5_split();
	test6_split();
}
