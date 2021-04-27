/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:07:31 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/27 16:39:16 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test1_atoi()
{
	const char str1[] = "     ---123gfhdk";
	const char str2[] = "    +123   5";
	const char str3[] = "-123gfhdk";
	const char str4[] = "a  5";

	printf("\n\n* ft_atoi *\n");
	printf("%s\t= %d\n", str1, ft_atoi(str1));
	printf("%s\t\t= %d\n", str2, ft_atoi(str2));
	printf("%s\t\t= %d\n", str3, ft_atoi(str3));
	printf("%s\t\t\t= %d\n", str4, ft_atoi(str4));

	printf("\n\n* atoi *\n");
	printf("%s\t= %d\n", str1, atoi(str1));
	printf("%s\t\t= %d\n", str2, atoi(str2));
	printf("%s\t\t= %d\n", str3, atoi(str3));
	printf("%s\t\t\t= %d\n", str4, atoi(str4));
}

void	test2_atoi()
{
	char *n = "945";

	printf("\n\n* ft_atoi *\n");
	printf("%s\t= %d\n", n, ft_atoi(n));

	printf("\n\n* atoi *\n");
	printf("%s\t= %d\n", n, atoi(n));
}

void	test3_atoi()
{
	char *n = "99999999999999999999999999";

	printf("\n\n* ft_atoi *\n");
	printf("%s\t= %d\n", n, ft_atoi(n));

	printf("\n\n* atoi *\n");
	printf("%s\t= %d\n", n, atoi(n));
}

void	test4_atoi()
{
	char *n = "-99999999999999999999999999";

	printf("\n\n* ft_atoi *\n");
	printf("%s\t= %d\n", n, ft_atoi(n));

	printf("\n\n* atoi *\n");
	printf("%s\t= %d\n", n, atoi(n));
}

void	test_atoi()
{
	test1_atoi();
	test2_atoi();
	//test3_atoi();
	//test4_atoi();

}
