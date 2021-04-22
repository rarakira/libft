/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:43:21 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/22 13:50:29 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_toupper()
{
	printf("\n\n* ft_toupper *\n");
	for (int i = 80; i <= 124; i++)
	{
		if (ft_toupper(i) == i)
		{
			printf("No change: (%d) %c,\n", i, (char)i);
		}
		else
		{
			printf("Changed: (%d) %c = %c,\n", i, (char)i,
			(char)ft_toupper(i));
		}
		
	}

	printf("\n\n* toupper *\n");
	for (int i = 80; i <= 124; i++)
	{
		if (toupper(i) == i)
		{
			printf("No change: (%d) %c,\n", i, (char)i);
		}
		else
		{
			printf("Changed: (%d) %c = %c,\n", i, (char)i,
			(char)toupper(i));
		}
		
	}
}
