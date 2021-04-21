/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:10:53 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 22:30:57 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strrchr()
{
	const char	str[] = "Hello World";
    char    *ptr;
	int w = 87;
    int char_0 = 0;

	printf("\n*strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)w);
    ptr = strrchr(str, w);
    printf("Letter found: %c\nAt %p\nString: %s\n\n", *ptr, ptr, ptr);
	printf("\n*ft_strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)w);
    ptr = ft_strrchr(str, w);
    printf("Letter found: %c\nAt %p\nString: %s\n\n", *ptr, ptr, ptr);

    printf("\n*strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)char_0);
    ptr = strrchr(str, char_0);
    printf("Letter found: %c\nAt %p\nString: %s\n\n", *ptr, ptr, ptr);
	printf("\n*ft_strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)char_0);
    ptr = ft_strrchr(str, char_0);
    printf("Letter found: %c\nAt %p\nString: %s\n\n", *ptr, ptr, ptr);
}

void	test2_strrchr()
{
	const char	str[] = "Hello World";
    char    *ptr;
    int last = 108;

    printf("\n*strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)last);
    ptr = strrchr(str, last);
    printf("Letter %c found: %p\nString: %s\n\n", *ptr, ptr, ptr);
	printf("\n*ft_strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)last);
    ptr = ft_strrchr(str, last);
    printf("Letter %c found: %p\nString: %s\n\n", *ptr, ptr, ptr);
}

void	test3_strrchr()
{
	const char	str[] = "Hello World";
    char    *ptr;
    int last = 97;

    printf("\n*strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)last);
    ptr = strrchr(str, last);
    printf("Letter %c not found: %p\n\n", last, ptr);
	printf("\n*ft_strrchr*\n");
	printf("String: %s\nFind: %c\n", str, (char)last);
    ptr = ft_strrchr(str, last);
    printf("Letter %c not found: %p\n\n", last, ptr);
}

void	test_strrchr()
{
	test1_strrchr();
    test2_strrchr();
    test3_strrchr();
}
