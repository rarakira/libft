/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:15:11 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/25 19:58:29 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char to_upper(unsigned int n, char ch)
{
	n = 32;
	if(ft_isalpha(ch))
		return((char)(ch - n));
	return(ch);
	
}

char increment_by_i(unsigned int n, char ch)
{
	return((char)(ch + n));
}

void	test_strmapi()
{
	char	str1[] = "abc";
	char	str2[] = "hello world";

	printf("\n\n* ft_strmapi *\n");
	printf("Sourse: %s\tNew str: %s\n", str1, ft_strmapi(str1, &to_upper));
	printf("Sourse: %s\tNew str: %s\n", str2, ft_strmapi(str2, &to_upper));
	printf("Sourse: %s\tNew str: %s\n", str1, ft_strmapi(str1,
	&increment_by_i));

}
