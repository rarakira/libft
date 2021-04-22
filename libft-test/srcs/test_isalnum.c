/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:13:17 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 13:22:54 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_isalnum()
{
	printf("\n\n* ft_isalnum *\n");
	for (int i = 0; i < 70; i++)
	{
		if (ft_isalnum(i))
		{
			printf("Digit %d = %c in ASCII\n", i, (char)i);
		}
	}

	printf("\n\n* isalnum *\n");
	for (int i = 0; i < 70; i++)
	{
		if (isalnum(i))
		{
			printf("Digit %d = %c in ASCII\n", i, (char)i);
		}
	}

	printf("\n\n* ft_isalnum *\n");
	printf("Nope: %d, Yep: %d\n\n", ft_isalnum(5), ft_isalnum(55));

	printf("\n* isalnum *\n");
	printf("Nope: %d, Yep: %d\n\n", isalnum(5), isalnum(55));
}
