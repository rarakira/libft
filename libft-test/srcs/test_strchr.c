/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:15:19 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 21:50:42 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strchr()
{
	const char	str[] = "Hello World";
    char    *ptr;
	int w = 87;
    int char_0 = 0;
    int f = 102;

	printf("\n*strchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)w);
    ptr = strchr(str, w);
    printf("Letter found: %c\nAt %p\n\n", *ptr, ptr);
	printf("\n*ft_strchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)w);
    ptr = ft_strchr(str, w);
    printf("Letter found: %c\nAt %p\n\n", *ptr, ptr);

    printf("\n*strchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)char_0);
    ptr = strchr(str, char_0);
    printf("Letter found: %c\nAt %p\n\n", *ptr, ptr);
	printf("\n*ft_strchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)char_0);
    ptr = ft_strchr(str, char_0);
    printf("Letter found: %c\nAt %p\n\n", *ptr, ptr);

    printf("\n*strchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)f);
    ptr = strchr(str, f);
    printf("Letter not found: %p\n\n", ptr);
	printf("\n*ft_strchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)f);
    ptr = ft_strchr(str, f);
    printf("Letter not found: %p\n\n", ptr);
}

void	test_strchr()
{
	test1_strchr();
}
