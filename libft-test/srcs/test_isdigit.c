/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:57:56 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 13:11:34 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_isdigit()
{
	printf("\n\n* ft_isdigit *\n");
	for (int i = 40; i < 100; i++)
	{
		if (ft_isdigit(i))
		{
			printf("Digit %d = %c in ASCII\n", i, (char)i);
		}
	}

	printf("\n\n* isdigit *\n");
	for (int i = 40; i < 100; i++)
	{
		if (isdigit(i))
		{
			printf("Digit %d = %c in ASCII\n", i, (char)i);
		}
	}

	printf("\n\n* ft_isdigit *\n");
	printf("Nope: %d, Yep: %d\n\n", ft_isdigit(5), ft_isdigit(55));

	printf("\n* isdigit *\n");
	printf("Nope: %d, Yep: %d\n\n", isdigit(5), isdigit(55));
}
