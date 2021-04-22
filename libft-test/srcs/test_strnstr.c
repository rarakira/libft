/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 08:51:53 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 11:25:20 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strnstr()
{
	const char	str1[] = "Hello World";
    const char	str2[] = "World";
    char    *ptr;
    size_t  len = 15;

	printf("\n*strnstr*\n");
	printf("String: %s\nFind: %s\n", str1, str2);
    ptr = strnstr(str1, str2,len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }

    printf("\n*ft_strnstr*\n");
	printf("String: %s\nFind: %s\n", str1, str2);
    ptr = ft_strnstr(str1, str2,len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }

}

void	test2_strnstr()
{
	const char	str1[] = "Hello World";
    const char	str2[] = "World";
    char    *ptr;
    size_t  len = 5;

	printf("\n*strnstr*\n");
	printf("String: %s\nFind: %s\n", str1, str2);
    ptr = strnstr(str1, str2,len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }

    printf("\n*ft_strnstr*\n");
	printf("String: %s\nFind: %s\n", str1, str2);
    ptr = ft_strnstr(str1, str2,len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }

}

void	test3_strnstr()
{
    const char	str1[] = "!!!!!!.!!!";
    const char	str2[] = "!!.";
    char    *ptr;
    size_t  len = 7;

    printf("\n*strnstr*\n");
	printf("String: %s\nFind: %s\n", str1, str2);
    ptr = strnstr(str1, str2,len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }

    printf("\n*ft_strnstr*\n");
	printf("String: %s\nFind: %s\n", str1, str2);
    ptr = ft_strnstr(str1, str2,len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }
}

void	test_strnstr()
{
	test1_strnstr();
    test2_strnstr();
    test3_strnstr();
}

