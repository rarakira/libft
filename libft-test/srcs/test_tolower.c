/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:53:56 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 13:54:46 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_tolower()
{
	printf("\n\n* ft_tolower *\n");
	for (int i = 60; i <= 105; i++)
	{
		if (ft_tolower(i) == i)
		{
			printf("No change: (%d) %c,\n", i, (char)i);
		}
		else
		{
			printf("Changed: (%d) %c = %c,\n", i, (char)i,
			(char)ft_tolower(i));
		}
		
	}

	printf("\n\n* tolower *\n");
	for (int i = 60; i <= 105; i++)
	{
		if (tolower(i) == i)
		{
			printf("No change: (%d) %c,\n", i, (char)i);
		}
		else
		{
			printf("Changed: (%d) %c = %c,\n", i, (char)i,
			(char)tolower(i));
		}
		
	}
}
