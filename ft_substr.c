/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:40:21 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/23 12:22:27 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ch;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ch = (char *)malloc(sizeof(char) * (len + 1));
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (i < len && (start + i) < ft_strlen(s))
	{
		ch[i] = (char)s[start + i];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
