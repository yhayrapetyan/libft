/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuhayrap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:40:21 by yuhayrap          #+#    #+#             */
/*   Updated: 2024/01/11 14:15:25 by yuhayrap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ch;
	unsigned int		i;

	if (s == NULL)
		return (NULL);
	if ((int)start >= ft_strlen(s))
	{
		ch = (char *)malloc(1);
		ch[0] = '\0';
		return (ch);
	}
	ch = (char *)malloc(sizeof(char) * ((len + 1)));
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (i < (unsigned int)len)
	{
		ch[i] = (char)s[start + i];
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
