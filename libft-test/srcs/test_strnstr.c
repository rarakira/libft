/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 08:51:53 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/28 09:21:56 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_strnstr()
{
	const char	str1[] = "Hello World";
    const char	str2[] = "World";
    char    *ptr;
    size_t  len = 15;

    printf("\n**** Test 1 ****\n");
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

    printf("\n**** Test 2 ****\n");
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

    printf("\n**** Test 3 ****\n");
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

void	test4_1_strnstr()
{
    const char	*str1 = NULL;
    const char	str2[] = "012345";
    size_t  len = 6;
    char    *ptr = NULL;

    printf("\n**** Test 4 - 1 ****\n");
    
    ptr = ft_strnstr(str2, str1, len);
    if (ptr)
    {
        printf("ft: String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("ft: String not found: %p\n\n", ptr);
    }
    
    ptr = strnstr(str2, str1, len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }

}

void	test4_2_strnstr()
{
    const char	*str1 = NULL;
    const char	str2[] = "012345";
    size_t  len = 6;
    char    *ptr = NULL;

    printf("\n**** Test 4 - 2 ****\n");
    ptr = ft_strnstr(str1, str2, len);
    if (ptr)
    {
        printf("ft: String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("ft: String not found: %p\n\n", ptr);
    }
    
    ptr = strnstr(str1, str2, len);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }
}

void	test5_strnstr()
{
    char    *ptr;
    printf("\n**** Test 5 ****\n");
    ;
    ptr = ft_strnstr(((void *)0), "fake", 3);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }
    ptr = strnstr(((void *)0), "fake", 3);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }
}

void	test6_strnstr()
{
    char    *ptr;
    char    *empty = (char*)"";

    printf("\n**** Test 6 ****\n");
    ;
    ptr = ft_strnstr(empty, "coucou", -1);
    if (ptr)
    {
        printf("String found: %s\nAt %p\n\n", ptr, ptr);
    }
    else
    {
        printf("String not found: %p\n\n", ptr);
    }
    ptr = strnstr(empty, "coucou", -1);
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
    //test4_1_strnstr();
    //test4_2_strnstr();
    //test5_strnstr();
    test6_strnstr();
}
