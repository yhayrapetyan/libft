/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:15:34 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/10 12:15:35 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	if ((!dest || !src) && !size)
		return (0);
	i = ft_strlen((const char *)dest);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	if (size < dest_len)
		return (src_len + size);
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	if (size < dest_len)
		return (src_len + size);
	else
		return (dest_len + src_len);
}
