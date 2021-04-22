/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:23:07 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 13:27:34 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_isascii()
{
	printf("\n\n* ft_isascii *\n");
	for (int i = 0; i < 300; i++)
	{
		if (ft_isascii(i))
		{
			printf("%d = %c\t", i, (char)i);
		}
	}

	printf("\n\n* isascii *\n");
	for (int i = 0; i < 300; i++)
	{
		if (isascii(i))
		{
			printf("%d = %c\t", i, (char)i);
		}
	}

	printf("\n\n* ft_isascii *\n");
	printf("Nope: %d, Yep: %d\n\n", ft_isascii(300), ft_isascii(55));

	printf("\n* isascii *\n");
	printf("Nope: %d, Yep: %d\n\n", isascii(300), isascii(55));
}
