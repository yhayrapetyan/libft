/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:04:49 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/10 13:54:06 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substring_len(const char *search_in, const char *to_find,
	size_t len)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0' && i <= (int)len)
	{
		if (search_in[i] != to_find[i])
			return (0);
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int	i;

	i = 0;
	if ((!str || !to_find) && len == 0)
		return (0);
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < (int)(len - 1))
	{
		if (str[i] == to_find[0])
		{
			if (substring_len(str + i, to_find, len) != 0)
				return ((char *)(str + i));
			else
				break ;
		}
		i++;
	}
	return (0);
}
