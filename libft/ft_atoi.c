/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:20:56 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/10 12:20:58 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;
	int	result;

	is_neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * is_neg);
}
