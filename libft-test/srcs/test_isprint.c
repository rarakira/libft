/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:32:05 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 13:32:31 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_isprint()
{
	printf("\n\n* ft_isprint *\n");
	for (int i = 0; i < 300; i++)
	{
		if (ft_isprint(i))
		{
			printf("%d = %c\t", i, (char)i);
		}
	}

	printf("\n\n* isprint *\n");
	for (int i = 0; i < 300; i++)
	{
		if (isprint(i))
		{
			printf("%d = %c\t", i, (char)i);
		}
	}

	printf("\n\n* ft_isprint *\n");
	printf("Nope: %d, Yep: %d\n\n", ft_isprint(300), ft_isprint(55));

	printf("\n* isprint *\n");
	printf("Nope: %d, Yep: %d\n\n", isprint(300), isprint(55));
}
