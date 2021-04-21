/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:16:51 by lbaela            #+#    #+#             */
/*   Updated: 2021/04/21 09:32:48 by lbaela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int ch)
{
	if (ch == ' ' || ch == '\f' || ch == '\n')
		return (1);
	if (ch == '\r' || ch == '\t' || ch == '\v')
		return (1);
	else
		return (0);
}

static int	issign(int ch, int *minus)
{
	if (ch == '-')
	{
		*minus = *minus + 1;
		return (1);
	}
	else if (ch == '+')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 0;
	result = 0;
	while ((isspace(str[i])) && str[i] != '\0')
	{
		if (isspace(str[i]))
			i++;
	}
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (issign(str[i], &minus))
			i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minus % 2 == 1)
		return (result * -1);
	return (result);
}
